#include <bits/stdc++.h>
#define umap unordered_map<int,int>
using namespace std;

umap compute;

void test(){
    int n,a = 1;
    cin >> n;
    if(compute[n]){
        cout << compute[n] << " " << n - compute[n] << "\n";
        return;
    }
    for(int i = 2; i * i <= n; i++){
        if(!(n % i)){
            a = n/i;
            break;
        }
    }
    cout << a << " " << n - a << "\n";
    compute[n] = a;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}