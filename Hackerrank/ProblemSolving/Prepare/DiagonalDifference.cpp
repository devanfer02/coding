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

    int i,j;
    int n;
    cin >> n;
    int num;
    int dig1 = 0, dig2 = 0;
    FOR(i,n){
        FOR(j,n){
            cin >> num;
            if(i == j){
                dig1 += num;
            }
            if(i + j == n - 1){
                dig2 += num;
            }
        }
    }
    num = dig1 - dig2;
    num < 0 ? cout << num * -1 : cout << num;

    return 0;
}
