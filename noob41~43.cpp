#include<bits/stdc++.h>
using namespace std;

void noob41()
{
	vector<int>num;
	int x;
	while(cin>>x && x != 0){
		num.push_back(x);
	}
	for(unsigned i = 0; i < num.size(); i++){
		cout<<num[num.size() - 1 - i]<<' ';
	}
}

void noob42()
{
	int n;
	cin>>n;
	vector<int>vec(n,0);
	for(int i = 0; i < n; i++){
		cin>>vec[i];
	}
	for(unsigned i = 0; i < vec.size(); i ++){
		int min_cmp = 0;
		for(unsigned j = 0; j < i; j++){
			if(vec[j] < vec[i])
				min_cmp++;
		}
		cout<<min_cmp<<' ';
	}
}

void noob43()
{
	int T;
	cin>>T;
	for(int q = 0; q < T; q++){
		int n;
		cin>>n;
		vector<int>quantity(n);//明确好数组大小，方便后续赋值
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin>>quantity[i];//此处赋值时需要明确好数组quantity的大小
			sum += quantity[i];
		}
		sort(quantity.begin(),quantity.end());//此处不能写成sort(quantity,quantity + n - 1)
		int range;
		range = quantity[n - 1] - quantity[0];
		cout<<range<<' ';
		double a;
		a = 1.0 * sum / n;
		double sum1 = 0;
		for(int i = 0; i < n; i++){
			sum1 += (quantity[i] - a) * (quantity[i] - a);
		}
		cout<<sum / n<<endl;
		
		
	}
}
