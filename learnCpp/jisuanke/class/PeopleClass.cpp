#include <iostream>
using namespace std;

class People{
    public:
    People(int new_number,string new_name,string new_gender,string new_Id,double new_salary){
        number = new_number;
        name = new_name;
        gender = new_gender;
        Id = new_Id;
        salary = new_salary;
        cout << "calling the constructor" <<endl;
    }
    
    People(People &p){
        number = p.number + 1;
        name = p.name;
        gender = p.gender;
        Id = p.Id;
        salary = p.salary;
        cout << "calling the copy constructor" <<endl;
    }
    
    void set_name(string newname){
        name = newname;
    }
    
    void show(){
        cout << number<< " " << name <<" " << gender<<" " << Id << " "<< salary << endl;
    }
    
    void set_salary(double new_salary){
        salary = new_salary;
    }
    
    ~People(){
        cout << "calling the destructor" <<endl;
    }
    private:
        int number;
        string name;
        string gender;
        string Id;
        double salary;
};


int main() {
    People p1(01, "qratosone", "Male", "2010201326", 4800.0);
    People p2(p1);
    p2.set_name("He");
    p2.set_salary(301.301);
    p1.show();
    p2.show();
    string new_name;
    cin>>new_name;
    People p3(p2);
    p3.set_name(new_name);
    p3.show();
    return 0;
}