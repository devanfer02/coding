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

    int n;
    cin >> n;
    if(n == 1918){
        cout << "26.09.1918";
        return 0;
    }
    if(n < 1918 && !(n % 4)){
        cout << "12.09." << n;
        return 0;
    }
    if(n > 1918 && !(n % 400)){
        cout << "12.09." << n;
        return 0;
    }
    if(n >= 1918 && !(n % 4) && n % 100 ){
        cout << "12.09." << n;
        return 0;
    }
    cout << "13.09." << n;
    return 0;
}
