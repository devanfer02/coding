#include <bits/stdc++.h>

using namespace std;

void test(){
	int n,p=0;
	int score[3] = {0};
	map<string,int> res;
	vector<vector<string>> tmp;
	cin >> n;
	tmp.assign(3,vector<string>(n,""));
	for(auto &i : tmp){
		for(auto &j : i){
			cin >> j;
			if(res[j]){
				res[j]++;
			} else {
				res[j] = 1;
			}
		}
	}
	for(auto &i : tmp) {
		for(auto &j : i) {
			if(res[j]==1)
				score[p] += 3;
			else if(res[j]==2)
				score[p] += 1;
		}
		p++;
	}
	for(int i=0;i<3;i++){
		cout << score[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		test();
	}
	return 0;
}
