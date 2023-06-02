#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,c=0,res=0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(auto &i : arr){
        if(i + k > 5) continue;
        i += k;
        c++;
        if(c == 3){
            res++;
            c=0;
        }
    }
    cout << res << "\n";
    return 0;
}
