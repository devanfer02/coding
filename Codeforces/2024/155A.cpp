#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,res=0,max,min;
    cin >> n;
    cin >> a;
    max = min = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        if(a > max){
            max = a;
            res++;
        }
        if(a < min){
            min = a;
            res++;
        }
    }
    cout << res << "\n";
    return 0;
}
