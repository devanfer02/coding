#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    bool yes;
    char c;
    int t;
    cin >> t;
    while(t--){
        yes = false;
        cin >> c;
        switch(c){
            case 'c':
                yes = true;
                break;
            case 'o':
                yes = true;
                break;
            case 'd':
                yes = true;
                break;
            case 'e':
                yes = true;
                break;
            case 'f':
                yes = true;
                break;
            case 'r':
                yes = true;
                break;
            case 's':
                yes = true;
                break;
        }
        yes ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    

    return 0;
}