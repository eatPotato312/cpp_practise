#include<iostream>
#include<string>
using namespace std;

//牛客新手入门 noob1
int noob1()
{
	cout<<"Hello Nowcoder "<<endl;
	return 0;
}

//noob2 本题考察cin>>...;的使用
int noob2()
{
	int a;
	cin>>a;
	cout<<a<<endl;
	return 0;
}

//noob3 cin对浮点型的掌握
int noob3()
{
	float a;
	cin>>a;
	cout<<a<<endl;
	return 0;
}

//noob4 cin对字符串的掌握
int noob4()
{
	string str;
	cin>>str;
	cout<<str<<endl;
	
	return 0;
}

//noob5 对于输出的控制要求
int noob5()
{
	//C++ 原生风格：cout + 流操纵符,需要添加头文件<iomanip>,同时C++支持C语言的输出格式
	//C++20推出了简洁的输出模式cout<<format("{[索引]:[格式说明]}",变量)；,VS2022支持，小熊猫不支持
	int a;
	long b;
	double c;
	char d;
	string e;//要添加头文件<string>
	cin>>a >>b >>c >>d >>e;
	cout<<a<<endl;
	cout<<b<<endl;
	printf("%.1lf\n",c); //报错则要添加头文件<cstdio>
	cout<<d<<endl;
	cout<<e<<endl;
	
	return 0;
}


int main()
{
	return 0;	
}
