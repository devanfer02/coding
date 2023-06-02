#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++){
        if(!(i%2) && !((n-i)%2)){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
	return 0;
}
