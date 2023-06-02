#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int num;
		char t = ' ';
		string s, res = "";
		cin >> num >> s;
		for(char &c : s){
			if(toupper(c) != t){
				t = toupper(c);
				res += t;
			}
		}
		cout << (res == "MEOW" ? "YES\n" : "NO\n");		
	}
	return 0;
}