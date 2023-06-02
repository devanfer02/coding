#include  <bits/stdc++.h>

using namespace std;

void test(){
    int n, mn = INT_MAX;
    cin >> n;
    int a[n];
    for(int i =0 ;i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1; i < n; i++){
        if(abs(a[i] - a[i-1]) < mn){
            mn = abs(a[i] - a[i-1]);
        }
    }
    cout << mn << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
