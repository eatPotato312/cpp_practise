#include<bits/stdc++.h>
using namespace std;

void noob47()
{
	int L , M;
	cin>>L >> M;
	vector<int>trees(L + 1,1);
	for(int f = 0; f < M; f++){
		int b , e;
		cin>> b >> e;
		for(int i = b ; i <= e; i++){
			trees[i] = 0;
		}
	}
	int sum = 0;
	for(int i = 0; i <= L + 1; i++){
		if(trees[i] == 1)
			sum++;
	}
	cout<<sum;
}

void noob48()
{
	int n , m;
	cin>>n >>m;
	//vector<int>grp(m);
	long long sum = 0,x;
	for(int t = 0; t < n * m; t++){
		cin>>x;
		sum += x;
		
	}
	cout<<sum;
}

void noob49()
{
	int n;
	cin>>n;
	vector<vector<int>>num(n,vector<int>(n));
	int x;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>x;
			num[i][j] = x;
		}
	}
	
	for(int i = 1; i < n;i++){
		for(int j = 0; j < i; j++){
			if(num[i][j] != 0){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
}
