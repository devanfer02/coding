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

    int i;
    int q,x,y,z;
    cin >> q;
    FOR(i,q){
        cin >> x >> y >> z;
        x -= z; x = abs(x);
        y -= z; y = abs(y);
        
        
        if(x == y){
            cout << "Mouse C";
        }
        if(x < y){
            cout << "Cat A";
        }
        if(x > y){
            cout << "Cat B";
        }
        cout << "\n";
    }   
    return 0;
}
