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
    
    int i,n,num;
    cin >> n;
    int arr[n + 1];
    for(i = 1; i <= n; i++){
        cin >> num;
        arr[num] = i;
    }
    for(i = 1; i <= n; i++){
        cout << arr[arr[i]] << endl;
    }
    return 0;
}
