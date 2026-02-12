#include<bits/stdc++.h>
using namespace std;

void noob46()
{
	int n , k , m;
	cin>> n >> k >> m;
	vector<int>people(n);
	for(int i = 0;i < n;i++){
		people[i] = i;
	}
	
	int start = k;
	while(people.size() > 1){
		int outone = (start + m - 1) % people.size();
		people.erase(people.begin() + outone);
		start = outone % people.size();
	}
	cout<<people[0];
}

//该题为约瑟夫环，主要考究的是数组“首尾相连”的问题，模拟环形报数
//首尾循环的数组要用取模运算来连接，每次的多个报数其实就是一个周期，只需求最后不足一个周期时的报数
//也就是进行取模运算
