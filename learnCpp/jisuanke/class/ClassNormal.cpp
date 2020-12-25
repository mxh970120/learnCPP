#include <iostream>
using namespace std;

class Clock{
  public:
	//构造函数
	Clock(){
        second = 0;
        minute = 0;
        hour = 0;
    }
    Clock(int newS,int newM,int newH){
       second = newS;
        minute = newM;
        hour = newH;
	}	
	// 或者 
	// Clock(int newS, int newM, int newH): second(newS), minute(newM), hour(newH){}
	
	// 类的方法
    void setTime(int newS,int newM,int newH){
        second = newS;
        minute = newM;
        hour = newH;
    }
    void showTime(){
    cout << hour << ":"<< minute <<":"<< second <<endl;
	}
	
    private:
    int second,minute,hour;
};


int main(){
    Clock MyClock;
    int second,minute,hour;
    cin >>second >>minute>>hour;
    MyClock.setTime(second,minute,hour);
    MyClock.showTime();
	
	Clock MyClock2(0,0,0);
	MyClock2.showTime();
    return 0;

}