#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i <= n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL

    int i;
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int k1 = x1, k2 = x2;

    FOR(i,100000){
        k1 += v1;
        k2 += v2;
        if(k1 == k2){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
