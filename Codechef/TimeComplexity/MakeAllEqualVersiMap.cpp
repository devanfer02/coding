//the key is to find max element minus n
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, i,key, max = 0;
    cin >> n;
    unordered_map<int,int>ans;
    unordered_map<int,int>::iterator itr;
    for(i = 0; i < n; i++){
        cin >> key;
        if(ans.count(key) > 0){
            itr = ans.find(key);
            itr->second++;
            continue;
        }
        ans[key] = 1;
    }   
    for(itr = ans.begin(); itr != ans.end(); itr++){
        if(itr->second > max){
            max = itr->second;
        }
    }
    cout << (max - n) * -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    

    return 0;
}   

