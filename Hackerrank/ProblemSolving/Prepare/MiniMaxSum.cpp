#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL

    int i;
    unsigned int sum = 0;
    unsigned int arr[5];
    FOR(i,5){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+5);
    cout << sum - arr[4] << " " << sum - arr[0];
    return 0;
}
