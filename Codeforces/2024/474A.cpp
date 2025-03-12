#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define lld long long double
#define pii pair<int,int>
#define psi pair<string,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define FOR(i,n) for(int i = 0; i < n; i++)
#define FOR_REV(i,n) for(int i = n-1; i>=0; i--)
#define log(msg) cout << msg << "\n";
#define debug(symbol, var) cout << symbol << ": " << var << "\n";
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;

int indexOf(char &comp, string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == comp){
            return i;
        }
    }
    return -1;
}

int main(){
    fastio
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./",s;
    char z;
    cin >> z >> s;
    for(auto &c : s){
        int i = indexOf(c,k);
        cout << (z != 'L' ? k[i-1 < 0 ? k.size()-1:i-1] : k[(i+1)%k.size()]);
    }
    cout << '\n';
    return 0;
}

