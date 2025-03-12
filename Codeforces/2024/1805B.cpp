#include <bits/stdc++.h>

using namespace std;

void test(){
    string s;
    int n,res;
    cin >> n >> s;
    res = n-1;
    for(int i = n-1; i >= 0; i--){
        if(s[res] > s[i]){
            res = i;
        }
    }
    s.insert(0,1,s[res]);
    s.erase(res+1,1);
    cout << s << '\n';

}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
