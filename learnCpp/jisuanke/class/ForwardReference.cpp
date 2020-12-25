class B; // 向前引用，因为A中用到了B但是B仍未定义

class A{
	// 仍然不能使用B中定义的方法
	public:
		void function(B b);	
};

class B{
	public:
		void function2(A a);
}