#include <bits/stdc++.h>

using namespace std;

int sum(double n){
    return n * (n+1) / 2;
}

int main(){
    int n,res=0,tmp;
    cin >> n;
    while(n>0){
        tmp = sum(double(res+1));
        if(n < tmp)
            break;
        else
            res++;
        n -= tmp;
    }
    cout << res << "\n";
    return 0;
}
