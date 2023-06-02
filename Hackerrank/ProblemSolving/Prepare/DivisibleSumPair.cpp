#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL

    int i,j;
    int n,k,count = 0;
    cin >> n >> k;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
    }
    FOR(i,n){
        for(j = i + 1; j < n;j++){
            if(!((arr[i] + arr[j]) % k)) count++;
        }
    }
    cout << count;
    return 0;
}
