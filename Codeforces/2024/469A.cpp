#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,q,x;
    set<int> res;
    cin >> n;
    cin >> p;
    for(int i = 0; i < p; i++){
        cin >> x;
        res.insert(x);
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> x;
        res.insert(x);
    }
    cout << (res.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
    return 0;
}
