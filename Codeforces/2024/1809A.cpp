#include <bits/stdc++.h>

using namespace std;

void test(){
    int ascii[59] ={0}, tmp=0,res;
    vector<int> coba;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    if(s[0]==s[1] && s[1]==s[2] && s[2] == s[3]){
        cout << -1 << '\n';
        return;
    }
    if((s[0]!=s[1]&&s[1]==s[2]&&s[2]==s[3]) || (s[0]==s[1]&&s[1]==s[2]&&s[2]!=s[3])){
        cout << 6 << '\n';
        return;
    }
    cout << 4 << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
