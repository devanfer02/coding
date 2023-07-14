#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t,n,x;
    bool f;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[101] = {0};
        f=1;
        for(int i=0;i<n;i++){
            cin >> x;
            a[x]++;
        }
        for(int i=1;i<101;i++){
            if(a[i] > a[i-1]){
                f=0; break;
            }
        }
        cout << (f?"YES\n":"NO\n");

    }
    return 0;
}