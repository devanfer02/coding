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

    string s;
    cin >> s;

    if(s.substr(8,10) == "AM"){
        if(s.substr(0,2) == "12"){
            cout << "00" << s.substr(2,6);
            return 0;
        }
        cout << s.substr(0,8);
    } else {
        if(s.substr(0,2) == "12"){
            cout << s.substr(0,8);;
            return 0;
        } 
        int num = stoi(s.substr(0,2));
        num += 12;
        cout << num << s.substr(2,6);

    }
    return 0;
}
