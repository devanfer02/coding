#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,x;
    cin >> t;
    while(t--){
        cin >> x;
        x < 100 ? cout << "Easy" : x < 200 ? cout << "Medium" : cout << "Hard";
        cout << endl;
    }

}
