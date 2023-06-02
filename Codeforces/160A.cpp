#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0,me=0,coin=0;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n, greater<int>());
    for(auto&i : arr){
        me += i;
        sum -= i;
        coin++;
        if(me > sum){
            break;
        }
    }
    cout << coin << "\n";
    return 0;
}
