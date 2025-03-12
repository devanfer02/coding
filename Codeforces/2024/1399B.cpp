#include <bits/stdc++.h>
#define ll long long

using namespace std;

void test(){
    int n;
    cin >> n;
    ll a[n], b[n];
    ll al = INT_MAX, bl = INT_MAX;
    ll res=0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < al)
            al = a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] < bl)
            bl = b[i];
    }
    for(int i=0; i < n; i++){
        res += max((a[i]-al),(b[i]-bl));
    }
    cout << res  << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
