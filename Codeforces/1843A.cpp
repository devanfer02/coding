#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t,n,res=0;
    cin >> t;
    while(t--) {
        res=0;
        cin >> n;
        int A[n];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        sort(A,A+n);
        for(int i=0;i<n/2;i++){
            res += abs(A[i] - A[n-i-1]);
        }
        cout << res << endl;
    }
    return 0;
}
