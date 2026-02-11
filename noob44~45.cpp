#include<bits/stdc++.h>
using namespace std;

void noob44()
{
	int T;
	cin>>T;
	for(int q = 0; q < T; q++){
		int n, k,s = 0,cnt = 0;
		cin>>n >>k;
		vector<int>num;
		int x;
		for(int i = 0; i < n; i++){
			cin >> x;
			num.push_back(x);
		}
		for(int i = 0; i < n;i++){
			if(num[i] >= k){
				s += num[i];
			}else if(num[i] == 0 && s >= 1){
				s--;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}

//noob45的解法是暴力，追求高效率解法的话使用逐位统计法
void noob45()
{
	int n,x;
	cin>> n >>x;
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		int j = i;
		while(j > 0){
			if(j % 10 == x)
				cnt++;
			j /= 10;
		}
	}
	cout<<cnt;
}
