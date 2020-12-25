#include <iostream>
using namespace std;

class soldier{
  public:
    soldier(string new_name,int new_cost, int new_hp){
        cost = new_cost;
        hp = new_hp;
        name = new_name;
    }
    soldier(soldier &s){
        name = s.name;
        cost = s.cost;
        hp = s.hp;
    }
    string getname() {
          return name;
    }
    int getcost() {
          return cost;    
    }
    int gethp() {
          return hp;    
    }
  private:
    string name;
    int cost;
    int hp;
};

class people{
    private:
      string name;
      soldier s1;
      soldier s2;
      soldier s3;
    public:
      people(string new_name,soldier soldier1,soldier soldier2,soldier soldier3):name(new_name),s1(soldier1),s2(soldier2),s3(soldier3){}

      void buy(int minerals){
        int time = 0;
        int s1number = 0;
        int s2number = 0;
        int s3number = 0;
        int sum = s1number + s2number + s3number;
        string flag = s1.getname();
        
        while(minerals >= 4){
            if(flag == s1.getname()){
                if(minerals >= s1.getcost()){
                    sum = s1number + s2number + s3number;
                    cout << "Time: " << time <<"  "<< name <<" "<<s1.getname()<<" "<< sum <<" born with HP "<< s1.gethp()<<" " << s1number +1 <<" " << s1.getname() <<" in base "<< name <<endl;
                    time += 1;
                    s1number += 1;
                    flag = s2.getname();
                    minerals -= s1.getcost();
                }else{
                    flag = s2.getname();
                }
            }else if(flag == s2.getname()){
                if(minerals >= s2.getcost()){
                    sum = s1number + s2number + s3number;
                    cout << "Time: " << time <<"  "<< name<<" "<<s2.getname()<<" "<< sum <<" born with HP "<< s2.gethp() <<" "<< s2number +1 <<" "<< s2.getname() <<" in base "<< name <<endl;
                    time += 1;
                    s2number += 1;
                    flag = s3.getname();
                    minerals -= s2.getcost();
                }else{
                    flag = s3.getname();
                }
            }else{
                if(minerals >= s3.getcost()){
                    sum = s1number + s2number + s3number;
                    cout << "Time: " << time <<"  "<< name<<" "<<s3.getname()<<" "<< sum <<" born with HP "<< s3.gethp() <<" "<< s3number +1 <<" " << s3.getname() <<" in base "<< name <<endl;
                    time += 1;
                    s3number += 1;
                    flag = s1.getname();
                    minerals -= s3.getcost();
                }else{
                    flag = s1.getname();
                }    

        }
        }
        cout << "Time: " << time - 1 <<"  "<< name << " base stop training troopers." << endl;
      }
     

};


int main(){
    
    int minerals;
    soldier SCV("SCV",10,10);
    soldier Marine("Marine",5,5);
    soldier Medic("Medic",4,4);

    people Raynor("Raynor",SCV,Marine,Medic);
    people Mengsk("Mengsk",Marine,Medic,SCV);
    
    cin >> minerals;
    Raynor.buy(minerals);
    Mengsk.buy(minerals);
     
    return 0 ;
    
}