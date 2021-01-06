#include<iostream>

int main(){
	int ival = 1024;
	std::cout<<ival<<std::endl;
	int &refVal = ival; // refVal is another name for ival(refval must be initialized!!!)
	std::cout<<refVal<<std::endl;
	
	refVal = 2; // 修改refVal的值-->修改refVal绑定对象的值-->修改ival
	std::cout<<ival<<std::endl;
	int ii = refVal; // 等价于 ii = ival
	std::cout<<ii<<std::endl;
	int &refVal3 = refVal; //refVal3绑定refVal-->绑定ival
	std::cout<<refVal3<<std::endl;

}