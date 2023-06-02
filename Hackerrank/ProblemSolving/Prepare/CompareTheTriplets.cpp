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
    int res[2];
    fill(res,0);
    int a[3];
    int b[3];

    FOR(i,3){
        cin >> a[i];
    }
    FOR(i,3){
        cin >> b[i];
    }
    FOR(i,3){
        a[i] == b[i] ? a[i] : a[i] < b[i] ? res[1]++ : res[0]++;
    }
    cout << res[0] << " " << res[1];
    return 0;
}
