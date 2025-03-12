#include <bits/stdc++.h>
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL
    
    int n,num, i; cin >> n;
    for(i = 0; i < n; i++){
        cin >> num;
        if(num % 2) cout << num << " ";
        else cout << num - 1 << " ";
    }
    return 0;

}