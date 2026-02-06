#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//noob12 经典的数位输出
void noob12()
{
	int a;
	cin >> a;
	for(;a != 0;)
	{
		cout<< a % 10;
		a /= 10;
	}
}

//noob13
void noob13()
{
	//#include<iomanip>
	double K;
	cin>>K;
	double F;
	F = (K - 273.15) * 1.8 + 32;
	cout<<fixed<<setprecision(10)<<F;
}

//noob14
//此题着重练习数学函数的运用，使用了开方"sprt()",幂函数"pow(num,指数)"，绝对值"abs";
void noob14()
{
	int x1,x2,y1,y2;
	cin>>x1 >>y1;
	cin>>x2 >>y2;
	double de,dm;
	de = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
	dm = abs(x1 - x2) + abs(y1 - y2);
	double derta;
	derta = abs(dm - de);
	cout<<fixed<<setprecision(10)<<derta;//牛客对于输出有小数最好都保留10位小数，保证数据通过
}

//noob15
void noob15()
{
	int a;
	cin>> a;
	int sum = 0;
	while(a != 0){
		sum += a % 10;
		a /= 10;
	}
	cout<<sum;
}

//noob16 从最小的单位通过进制转化到大的单位
void noob16()
{
	int s;
	cin>> s;
	int min = 0,h = 0;
	min = s / 60;
	s %= 60;
	h = min / 60;
	min %= 60;
	cout<<h<<' '<<min<<' '<<s;
}

//noob17
void noob17()
{
	int MB;
	cin>>MB;
	int quantity;
	quantity = MB * 1024 * 1024 / 4;
	cout<<quantity;
	
}

//noob18
void noob18()
{
	int a,b,c;
	cin>>a >>b >>c;
	int S,V;
	S = 2 * (a*b + b * c + a * c);
	V = a*b*c;
	cout<<S<<endl;
	cout<<V<<endl;
}

//noob19
void noob19()
{
	int a,b,c;
	cin>>a >>b >>c;
	int s ;
	s = a*0.2 + b*0.3 + c*0.5;
	cout<<s;
}

//noob20 数字过大时要注意数据的溢出，int 4字节 约21亿， long 不建议使用，用long long最好，8字节，约92亿亿
void noob20()
{
	long long n;
	cin>>n;
	long long sum = 0;
	sum = n*(n + 1)/2;
	cout<<sum;
}

int main() {
	
}
