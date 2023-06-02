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
    
    int i,num;
    int n,q,k;
    cin >> n >> k >> q;

    int arr[n];
    int query[q];
    FOR(i,n){
        cin >> num;
        arr[(i + k) % n] = num;
    }
    FOR(i,q){
        cin >> query[i];
        cout << arr[query[i]] << endl;
    }
    return 0;
}
