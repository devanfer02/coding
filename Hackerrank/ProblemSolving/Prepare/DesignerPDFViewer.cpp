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

    string s;
    int i,index,max = 0;
    int cars[26];
    FOR(i,26){
        cin >> cars[i];
    }
    cin >> s;
    FOR(i,(int)s.length()){
        index = (int)s[i] - 97;
        if(max < cars[index]) max = cars[index];
    }
    cout << (int)s.length() * 1 * max;
    return 0;
}
