#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , m;
	cin>>n >>m;
	vector<vector<char>>minefiled(n + 2,vector<char>(m + 2));
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= m; j++){
			cin>>minefiled[i][j];
		}
	}

	//对于雷的判断只需向雷四周格子的值自增1即可，对于边界的情况，数组多了两排两行，防止数组溢出
	vector<vector<int>>result(n + 2,vector<int>(m + 2,0));
	//表示雷周围格子的坐标
	int dx[8] = { 1, 1, 0,-1,-1,-1, 0, 1};
	int dy[8] = { 0,-1,-1,-1, 0, 1, 1, 1};
	for(int i = 1; i <= n;i++){
		for(int j = 1; j<= m;j++){
			if(minefiled[i][j] == '*'){
				result[i][j] = -1;
				for(int k = 0; k < 8;k++){
					if(result[i + dx[k]][j + dy[k]] == -1){
						continue;
					}else
						result[i + dx[k]][j + dy[k]]++;//数组的自增问题？该写法就是对数组相对应的值进行自增1，没有赋值的效果，C与C++均可以
				}
			}
		}
	}
	
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= m;j++){
			if(result[i][j] == -1){
				cout<<'*';
			}else 
				cout<<result[i][j];
		}
		cout<<endl;
	}
	
}
