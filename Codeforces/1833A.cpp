#include <bits/stdc++.h>

using namespace std;
 
int main(){	
    int t,n; string s;
    cin >> t; 
    while(t--){
	set<string> st;
	cin >> n >> s;
	for(int i=0;i<n-1;i++){
	    st.insert(s.substr(i,2));
	}
	cout << st.size() << '\n';
    }

    return 0;
}
