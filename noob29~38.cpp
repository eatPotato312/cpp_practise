#include<bits/stdc++.h>
//#include<iostream>
//#include<cmath>
using namespace std;

void noob29()
{
	int fre;
	cin>> fre;
	for(int i = 0;i < fre;i++){
		int a, b;
		cin>> a >>b;
		cout<<a + b<<endl;
	}
}

void noob30()
{
	int a, b;
	while (cin >> a >> b) { 
		if(a == 0 && b == 0)
			return ;
		cout << a + b << endl;
	}
}

bool is_prime(int n)
{
	if(n <= 1){
		return false;
	}
	if(n == 2){
		return true;
	}
	if(n % 2 == 0){
		return false;
	}
	for(int i=3;i<=sqrt(n);i+=2){//add <cmath>
		if(n % i == 0)
			return false;
	}
	return true;
}

void noob31()
{
	int fre;
	cin>>fre;
	for(int i=0;i<fre;i++){
		int n;
		cin>>n;
		if(is_prime(n))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}

void noob32()
{
	int n,sum = 0;
	cin>>n;
	for(int i = 1;i <= n;i++){
		if(i % 2 == 0)
			sum -= i;
		else
			sum += i;
	}
	cout<<sum;
}

void noob33()
{
	int n;
	double sum = 0;
	cin>>n;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	cout<<sum;
}

//noob34 对于排序问题可以使用sort函数来进行排序；
//编程过程中可以使用<bits/stdc++.h>头文件，里面包含了C++的所有头文件
void noob34()
{
	int totalnum;
	cin>>totalnum;
	int num[totalnum];
	for(int i = 0;i < totalnum;i++){
		cin>>num[i] ;
	}
	sort(num,num + totalnum);
	cout<<num[totalnum - 1] - num[0];
}

void noob35()
{
	int n,sum = 0;
	cin>>n;
	int nowresult = 0;
	for(int i = 1;i <= n;i++){
		nowresult += i;
		sum += nowresult;
	}
	cout<<sum;
}

//构造斐波那契数列函数，利用递归思想
int fib(int n){
	if(n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
void noob36()
{
	int n;
	cin>>n;
	cout<<fib(n);
}

void noob37()
{
	int n;
	cin>>n;
	if(n < 0)
		n = abs(n);
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	cout<<sum;
}

void noob38()
{
	int n;
	cin >> n;
	int nownum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 4 == 0) {
			//cout<<i<<endl;
			continue;
		}
		
		//检查位数有没有4
		int sum0 = i;
		bool hasfour = false;
		nownum = sum0;
		while (nownum != 0) {
			if (nownum % 10 == 4) {
				hasfour = true;
				break;
			}
			nownum /= 10;
		}
		
		if (hasfour)
			continue;
		
		cout << i << endl;
	}
}
