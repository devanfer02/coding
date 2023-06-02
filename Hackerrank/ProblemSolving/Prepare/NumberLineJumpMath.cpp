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

    double x1,x2,v1,v2,res;
    cin >> x1 >> v1 >> x2 >> v2;

    if((x1 > x2 || x1 < x2) && !(v2-v1)){
        cout << "NO";
        return 0;
    }

    if(x1 == x2 && v1 == v2){
        cout << "YES";
        return 0;
    }

    res = (x1 - x2) / (v2 - v1);

    if(res >= 0 && floor(res) == res){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
