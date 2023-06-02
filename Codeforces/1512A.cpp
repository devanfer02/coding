#include <bits/stdc++.h>

using namespace std;

void test(){
    int n,res;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    cout << "\n";
    for(int i = 0; i < n; i++){
        if(i == 0 && (arr[i] != arr[i+1]) && (arr[i] != arr[i+2])){
            res = i+1;
            break;
        }
        if(i == n - 1 && arr[i] != arr[i-1] && arr[i-1] == arr[i-2]){
            res = i+1;
            break;
        }
        if(i && (i < n-1) && arr[i] != arr[i-1] && arr[i]!=arr[i+1]){
            res = i + 1;
            break;
        }

    }
    cout << res << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
