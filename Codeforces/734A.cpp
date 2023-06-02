#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0,d=0;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        c == 'D' ? d++ : a++;
    }
    cout << (d == a ? "Friendship\n" : a > d ? "Anton\n" : "Danik\n");
    return 0;
}
