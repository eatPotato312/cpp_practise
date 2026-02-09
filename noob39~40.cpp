#include<bits/stdc++.h>
using namespace std;

int shulie(int n){
	if(n ==1 )
		return 0;
	if(n == 2 || n == 3)
		return 1;
	return shulie(n - 3) + 2 * shulie(n - 2) + shulie(n - 1);
}

void noob39()
{
	int n;
	cin>>n;
	cout<<shulie(n);
}

//main函数内是noob40，该题目运用了动态数组，DP
//对于常量MOD的定义，使用#define时对于数值要用1000000007，而不能使用1e9 + 7（C++将该数确定为浮点型，不能用作取模运算）
int main() 
{
	const int MOD = 1e9 + 7;
	int n,m;
	cin>>n >>m;
	vector<vector<int>>dp(n + 1,vector<int>(m + 1,0));
	for(int i = 1; i <= n;i++)
		dp[i][1] = 1;
	for(int j = 1;j <= m;j++)
		dp[1][j] = 1;
	
	for(int i = 2;i <= n;i++){
		for(int j = 2;j <= m;j++){
			dp[i][j] = (dp[i - 1][j] % MOD + dp[i][j -1] % MOD) % MOD;
		}
	}
	
	cout<<dp[n][m];
	
}

