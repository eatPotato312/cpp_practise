#include<iostream>

using namespace std;

void noob21()
{
	int day;
	cin>>day;
	switch(day)
	{
	case 1:
		cout<<2;
		break;
	case 2:
		cout<<3;
		break;
	case 3:
		cout<<4;
		break;
	case 4:
		cout<<5;
		break;
	case 5:
		cout<<6;
		break;
	case 6:
		cout<<7;
		break;
	case 7:
		cout<<1;
		break;
	}
}

void noob22()
{
	int year;
	cin>>year;
	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		cout<<"yes";
	else
		cout<<"no";
}

void noob23()
{
	int a,b;
	cin>>a >>b;
	if(a > b)
		cout<<'>';
	else if(a == b)
		cout<<'=';
	else
		cout<<'<';
}

void noob24()
{
	int num;
	cin>>num;
	if(num % 2 == 0)
		cout<<num / 2;
	else
		cout<<num * 3 + 1;
}

void noob25()
{
	int n;
	cin>>n;
	if(n > 50)
		cout<<"yes";
	else
		cout<<"no";
}

void noob26()
{
	int a, b, c;
	double avg;
	cin>> a >> b >>c;
	avg = (a + b + c)/3;
	if(avg < 60)
		cout<<"YES";
	else
		cout<<"NO";
}

//noob27该题只需要找寻三个数中的最大值和最小值，可以通过多个if语句进行判断，但可以用数组来进行排序，
//以此能够更广泛的应用
void noob27()
{
	int num[3] = {0};
	cin>>num[0] >>num[1] >>num[2];
	int max;
	for(int i = 0;i < 3;i++){
		max = i;
		for(int j= i + 1;j < 3;j++){
			if(num[max] < num[j])
				max = j;
		}
		int t;
		t = num[max];
		num[max] = num[i];
		num[i] = t;
	}
	cout<<"The maximum number is : "<<num[0]<<endl;
	cout<<"The minimum number is : "<<num[2]<<endl;
	
}
//复习排序
void swap()
{
	int totalnum;
	cin>>totalnum;
	int num[100];
	for(int i = 0;i < 100;i++){
		cin>>num[i];
	}
	int max;
	for(int i = 0;i < totalnum;i++){
		max = i;
		for(int j = i + 1;j < totalnum;j++){
			if(num[max] < num[j])
				max = j;
		}
		int t;
		t = num[i];
		num[i] = num[max];
		num[max] = t;
	}
	cout<<"The maximum number is : "<<num[0]<<endl;
	cout<<"The minimum number is : "<<num[totalnum];
}
void noob28 ()
{
	int time;
	cin>>time;
	time %= 100;
	switch (time % 12 / 3) {//此题精妙之处在于直接用数字的计算来判断，一般情况用多个if语句来判断季节
	case 0:
		cout<<"winter";
		break;
	case 1:
		cout<<"spring";
		break;
	case 2:
		cout<<"summer";
		break;
	case 3:
		cout<<"autumn";
		break;
	default:
		break;
	}
}
