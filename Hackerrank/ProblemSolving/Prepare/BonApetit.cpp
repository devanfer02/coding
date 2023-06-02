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

    int i,n,k,b,num,sum = 0;
    cin >> n >> k;
    FOR(i,n){
        cin >> num;
        if(i != k) sum += num;
    }
    sum /= 2;
    cin >> b;
    if(sum == b) cout << "Bon Appetit";
    else cout << b - sum;
    return 0;
}
