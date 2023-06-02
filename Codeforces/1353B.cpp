#include <bits/stdc++.h>

using namespace std;

int sum(int *arr, int &n){
    int sum =0;
    for(int i = 0; i < n; i++){
        sum += *(arr+i);
    }
    return sum;
}

void test(){
    int n,k;
    cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int mxrn, mxfr = sum(a,n);
    sort(a,a+n);
    sort(b,b+n);
    int l=0,r=n-1;
    while(k--){
        a[l] = b[r];
        l++;r--;
        mxrn = sum(a,n);
        if(mxfr < mxrn) mxfr = mxrn;
    }
    cout << mxfr << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
