#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);
#define ull unsigned long long 
#define ll long long 

using namespace std;

ull fibos[201];

ull memo(int n){
    if(fibos[n] != 0){
        return fibos[n];
    }
    if(n <= 2) return 1;
    return fibos[n] = memo(n-1) + memo(n-2);
}

void test(){
    ull sum = 0;
    ull n,index = 0;
    cin >> n;
    while(fibos[index] <= n){
        if(!(fibos[index] % 2)) sum += fibos[index];
        index++;
    }
    cout << sum << endl;
}


int main(){
    IOS_FALSE
    CIN_NULL
    
    memset(fibos,0,sizeof(fibos));
    memo(201);

    int t;
    cin >> t;
    while(t--){
        test();
    }
    

    return 0;
}
