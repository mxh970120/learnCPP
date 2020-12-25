#include<iostream>
#include <cmath>
using namespace std;

class Point{
public:
    Point(int newX=0,int newY=0){
        cout << "calling constructor" << endl;
        x=newX;
        y=newY;
    }
    Point(Point &p){
        x=p.x;
        y=p.y;
    }
    ~Point(){
        cout << "calling destructor " << endl;
    }
    void move(int x,int y){
        this->x+=x;
        this->y+=y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
private:
    int x,y;
};
class PointsArray{
public:
    PointsArray(int size):size(size){
        array = new Point[size];

    }
    Point &getElement(int index){
        if(index>=0 && index<size){
            return array[index];
        }
        else{
			// 这里有报错 warning: control reaches end of non-void function [-Wreturn-type]
			// 需要加一个return
            cout << "invalid index!" << endl;
        }
    }
	
    ~PointsArray(){
		delete[] array;
    }
private:
    Point * array;
    int size;
};

// 动态内存分配，按照实际需要申请内存，并在使用结束后释放
int main(){
	int *point;
	// 动态分配了用于存放int；类型的内存空间，然后用初始值2赋值
	point = new int(2);
	
	int *point2 = new int;  // 没有初始
	int *point3 = new int();  // 初值为0
	
	int n;
	cin >> n;
	// int a[n]; 这么写会报错
	int *a = new int[n];
	
	// 所有new都必须用delete回收，不然会造成内存泄漏
	delete point;  // 对于基本类型或者对象
	delete[] a;  // 对于数组 
	
	Point *p = new Point(1,2);
    delete p;
    
    int n2;
    cin >> n2;
    PointsArray pa(n2);
    cout<< pa.getElement(0).getX()<<" "<<pa.getElement(0).getY()<<endl;
    pa.getElement(1).move(1,1);
    cout<< pa.getElement(1).getX()<<" "<<pa.getElement(1).getY()<<endl;
}