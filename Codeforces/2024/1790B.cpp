#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1790/problem/B
void test(){
	int n,r,s,p=0,tmp;
	cin >> n >> s >> r;
	tmp = r;
	int arr[--n] = {0};
	for(;r;r--){
		arr[p++]++;
		p %= n;
	}
	for(auto &i : arr){
		cout << i << " ";
	}
	cout << s-tmp << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--)
		test();
	return 0;
}
