#include <bits/stdc++.h>
#define ull unsigned long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void test(){
    int n,d,temp,len; bool flag = 0;
    string s,res = "",sub1,sub2;
    ull val1, val2;
    cin >> n >> d;
    cin >> s;
    len = s.length();
    if(!len){
        cout << d << "\n";
        return;
    }
    for(int i = 0; i < len; i++){
        temp = s[i] - '0';
        if(flag){
            res += s[i];
            continue;
        }
        if(temp > d){
            res += s[i];
        } else {
            sub1 = to_string(d) + s.substr(i,8);
            sub2 = s.substr(i,8) + to_string(d);
            val1 = stoull(sub1);
            val2 = stoull(sub2);
            if(val1 > val2){
                res += sub1; 
                flag = 1;
                i+=7;
            } else {
                res += s[i];
            }
        }
//        cout << res << endl;
    }
    if(!flag){
        res += to_string(d);
    }
    cout << res << "\n";
}

int main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
