#include <bits/stdc++.h>
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL
    
    int aLen, bLen, n , m;
    int i, j, same = 0;
    string a,b, temp;
    cin >> a >> b;
    aLen = a.length(); bLen = b.length();
    n = aLen;
    m = bLen;
    if(a > b){
        temp = a;
        a = b;
        b = temp;
        n = bLen;
        m = aLen;
    } 
    j = m - 1;
    for(i = n - 1; i >= 0; i--, j--){
        if(a[i] != b[j]){
            break;
        }
        same++;
    }
    
    cout << (n - same) + (m - same);

    return 0;

}