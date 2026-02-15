#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<vector<int>>num(n + 1,vector<int>(n + 1,1));
	for(int i = 3; i <= n; i++){
		for(int j = 2 ; j<= 3; j++){
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
			
		}
	}
	for(int i = 1; i <= n ; i++){
		for(int j = 1 ;j <= i; j++){
			cout<<num[i][j];
			if(j != n)
				cout<<' ';
		}
		cout<<endl;
	}
}
