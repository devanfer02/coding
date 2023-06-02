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

    int n,i,j,d,m;
    int sum, count = 0;
    cin >> n;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
    }
    cin >> d >> m;
    FOR(i,n){
        if(i + m > n) break;
        sum = 0;
        for(j = i; j < m + i;j++){
            sum += arr[j];
        }
        if(sum == d) count++;
    }
    cout << count;
    return 0;
}
