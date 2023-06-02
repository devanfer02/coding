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

    double m = 0,z = 0,p = 0;
    int i,n;
    cin >> n;
    int num;
    FOR(i,n){
        cin >> num;
        if(num < 0){
            m++;
        }
        if(num == 0){
            z++;
        }
        if(num > 0){
            p++;
        }
    }
    printf("%.6f\n",p / n);
    printf("%.6f\n",m / n);
    printf("%.6f\n",z / n);
    return 0;
}
