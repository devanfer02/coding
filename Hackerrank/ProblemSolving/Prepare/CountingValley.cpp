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

    int n,i,count = 0,pos = 0;
    bool enter = false;
    string s;
    cin >> n >> s;
    FOR(i,n){
        switch(s[i]){
            case 'U':
                pos++;
                if(pos >= 0 && enter){
                    count++;
                    enter = false;
                }
                break;
            case 'D':
                pos--;
                if(pos < 0){
                    enter = true;
                }
                break;
        }
    }

    cout << count;    
    return 0;
}
