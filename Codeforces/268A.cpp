#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int main(){
    int t,a,b,len,res=0;
    vector<pii> arr;
    cin >> t;
    while(t--){
        cin >> a >> b;
        arr.push_back({a,b});
        len = arr.size();
        if(len == 1) continue;
        for(int i = 0; i < len - 1; i++){
            if(arr[i].second == arr[len-1].first)
                res++;
            if(arr[i].first == arr[len-1].second)
                res++;
        }
    }
    cout << res << "\n";
    return 0;
}
