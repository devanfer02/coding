#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

static int arr[101];

int main(){
    IOS_FALSE
    CIN_NULL

    fill(arr,0);
    int i,n,num,pair = 0;
    cin >> n;
    FOR(i,n){
        cin >> num;
        arr[num]++;
        if(!(arr[num] % 2)) pair++;
    }
    cout << pair;
    return 0;
}
