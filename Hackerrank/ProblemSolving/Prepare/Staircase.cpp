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

    int i,j,n;
    cin >> n;
    for(i = 1,i <= n; i++){
        for(j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
