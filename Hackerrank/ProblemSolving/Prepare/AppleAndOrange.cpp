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

    int i,num,resA = 0, resB = 0;
    int s,t,a,b,m,n;
    cin >> s >> t >> a >> b >> m >> n;

    FOR(i,m){
        cin >> num;
        num += a;
        if (num >= s && num <= t){
            resA++;
        }
    }
    FOR(i,n){
        cin >> num;
        num += b;
        if (num >= s && num <= t){
            resB++;
        }
    }
    cout << resA << "\n" << resB;
    return 0;
}
