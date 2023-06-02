#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long sum = 0;
    cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = 0; i < n; i++)
        sum += pow(2,i) * arr[i];
    cout << sum << "\n";


    return 0;
}
