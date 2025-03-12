#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);
#define ull unsigned long long 

using namespace std;

void test(){
    int i,n,temp2 = 0,count = 0;
    cin >> n;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
        switch(arr[i]){
            case 2:
                temp2++;
                break;
        }
    }
    if(!temp2) {cout << 1 << endl; return;}
    if(temp2 % 2) {cout << -1 << endl; return;}
    FOR(i,n){
        if(arr[i] == 2) count++;
        if(count == (temp2 / 2)){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    IOS_FALSE
    CIN_NULL
    
    int t;
    cin >> t;
    while(t--){
        test();
    }
    

    return 0;
}