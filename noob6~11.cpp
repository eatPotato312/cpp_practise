#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//noob6
int noob6()
{
	int a,b;
	cin>>a >>b;
	cout<<a + b<<endl;
	return 0;
	
}

//noob7
int noob7()
{
	int c,d;
	cin>> c >> d;
	//保留小数点要添加<iomanip>,cout<<fixed<<setprecision(保留几位小数)<<数值<<endl;
	//没有fixed为保留几位有效数字
	cout<<fixed<<setprecision(3)<<(double)d / (double)c * 100<<'%'<<endl;
	return 0;
}

//noob8 
int noob8()
{
	int a,b;
	cin>> a >>b;
	cout<<a / b<<' '<<a % b<<endl;//输出空格为字符' '
	return 0;
}

//noob9
int noob9()
{
	int a;
	cin>> a;
	cout<< a % 10<<endl;
	return 0;
	
}

//noob10
int noob10()
{
	int a;
	cin>> a;
	if(a / 10 != 0)
		cout<<a / 10 %10<<endl;
	else
		cout<<0<<endl;
	return 0;
	
}

//noob11
//不使用数学函数的话，则用二分法求解
int noob11()
{
	//添加c的数学函数<cmath>
	int a;
	cin >>a;
	cout<< (int)sqrt(a)<<endl;
	return 0;
}


