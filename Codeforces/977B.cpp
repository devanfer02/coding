#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> res;
    int n,x=-1;
    string s,key,gr;
    cin >> n >> s;
    for(int i = 0; i < n-1; i++){
        key = "";
        key += s[i];
        key += s[i+1];
        res[key]++;
        if(res[key] > x){
            gr = key;
            x = res[key];
        }
    }
    cout << gr << '\n';
}
