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

    int i,n,num,id,max = 0;
    int ids[5];
    fill(ids,0);
    cin >> n;
    FOR(i,n){
        cin >> num;
        num--;
        ids[num]++;
    }
    FOR_REV(i,5){
        if(max <= ids[i]){
            max = ids[i];
            id = i + 1;
        }
    }
    cout << id;
    return 0;
}
