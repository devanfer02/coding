#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    char c; bool f;
    int t,n; ll mx; ll tmp;
    cin >> t;
    while(t--) {
        cin >> n; f=1; mx=0;
        ll a[n] = {0}, b[n] = {0}; 
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<n;i++) {
            cin >> b[i];
            if(b[i]>a[i])f=0;
            mx = max(mx,a[i]-b[i]);
        }
        for(int i=0;i<n;i++) {
            //if(a[i]<mx && b[i])f=0;
            //if((a[i]==b[i])&& mx)f=0;
            tmp = a[i] - mx < 0 ? 0 : a[i] - mx;
            if(tmp!=b[i]) f=0;
        }

        cout << (f?"YES\n":"NO\n");
        
    }
    return 0;
}

