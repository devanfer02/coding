#include <bits/stdc++.h>

using namespace std;

void test(){
    int n,flag=0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i+1 >= arr[i]){
            flag = 1;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
