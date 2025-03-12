#include <bits/stdc++.h>
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void reverseStr(string &str, int n){
    for(int i = 0; i < n / 2; i++){
        swap(str[i],str[n - i - 1]);
    }
}

int main(){
    IOS_FALSE
    CIN_NULL
    
    int n,i,j,d;
    string s;
    cin >> n >> s;
    if(n == 1) {
        cout << s;
        return 0;
    }
    vector<int> div;
    for(i = n; i > 0; i--){
        if(!(n % i)){
            div.push_back(i);
        }
    }
    d = div.size() - 1;
    while(d >= 0){
        j = div[d];
        reverseStr(s, j);
        d--;
    }
    cout << s << endl;
    return 0;

}