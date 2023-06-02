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

    int b,n,m,i,j,num;
    int count = 0, max = -1;
    cin >> b >> n >> m;

    int k[n];
    int arr[n * m];

    FOR(i,n){
        cin >> k[i];
    }
    FOR(i,m){
        cin >> num;
        FOR(j,n){
            arr[count] = num + k[j];
            count++;
        }
    }

    FOR(i,(n*m)){
        if(b >= arr[i] && max < arr[i]){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
