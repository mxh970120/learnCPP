#include<iostream>
using namespace std;

int main(){
	cout<< "/*";
	cout<< "*/";
	// 第一个引号被注释掉了，报错
	cout<< /* " */"*/;
	cout<< /* "*/" /* "/*" */;
}