#include<bits/stdc++.h>
using namespace std;

void noob50() {
	int n ,m;
	cin>> n >>m;
	vector<vector<int>>matrix(n,vector<int>(m));
	int x;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>x;
			matrix[i][j] = x;
		}
	}
	
	for(int i = 0; i < m ; i++){
		for(int j = 0; j < n; j++){
			cout<<matrix[j][i]<<' ';
		}
		cout<<endl;
	}
}


