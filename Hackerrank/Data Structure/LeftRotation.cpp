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
    
    int n,i,d,temp,tmp;
    cin >> n >> d;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
    }

    while(d--){
        temp = arr[0];
        FOR_REV(i,n){
            tmp = arr[i];
            arr[i] = temp;
            temp = tmp;
        }
    }
    FOR(i,n){
        cout << arr[i] << " ";
    }

    return 0;
}
