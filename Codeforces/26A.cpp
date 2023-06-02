#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[10001] = {0};
    int n,res=0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(!arr[i]){
            for(int j = i + i; j <= n; j += i)
                arr[j]++;
        } else {
            if(arr[i] == 2)
                res++;
        }
    }
    cout << res << '\n';
    return 0;
}
