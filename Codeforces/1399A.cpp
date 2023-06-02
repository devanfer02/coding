#include <bits/stdc++.h>

using namespace std;

void test(){
    int n; bool flag = 1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(n == 1){
        cout << "YES\n";
        return;
    }
    sort(arr,arr+n);
    for(int i = 1; i < n; i++){
        if(abs(arr[i] - arr[i-1]) > 1){
            flag = 0;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
