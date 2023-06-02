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
    
    int i,j,n,q,count;
    string s;
    cin >> n;
    string str[n];
    FOR(i,n){
        cin >> str[i];
    }
    cin >> q;
    FOR(i,q){
        cin >> s;
        count = 0;
        FOR(j,n){
            if(s == str[j]){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
