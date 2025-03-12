#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(auto&i : arr){
        cin >> i;
    }
    int l = 0, r = n-1;
    int s=0,d=0,i=0,tmp;
    while(l <= r){
        if(arr[l] > arr[r]){
            tmp = arr[l];
            l++;
        } else {
            tmp = arr[r];
            r--;
        }
        !(i++%2) ? s+=tmp : d+=tmp;
    }
    cout << s << " " << d << "\n";
    return 0;
}
