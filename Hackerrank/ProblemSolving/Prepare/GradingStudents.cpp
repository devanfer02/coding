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

    int n,i,num;
    cin >> n;
    FOR(i,n){
        cin >> num;
        if(num < 38 || !(num % 5)){
            cout << num << endl;
            continue;
        }
        if(!((num + 1) % 5)){
            cout << num + 1 << endl;
            continue;
        } 
        if(!((num + 2) % 5)){
            cout << num + 2 << endl;
            continue;
        } 
        cout << num << endl;
    }
    return 0;
}
