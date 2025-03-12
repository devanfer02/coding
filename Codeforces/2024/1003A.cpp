#include <bits/stdc++.h>
//MACROS
#define lli long long int
#define ull unsigned long long
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a > b ? b : a)
#define FOR(i,n) for(i = 0; i < n; i++)
#define SORT(arr,n) sort(arr,arr+n);
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL

    int n, i, counter = 1, max = 0;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
    }
    SORT(arr,n);
    FOR(i,n-1){
        if(arr[i] != arr[i+1]){
            if(max < counter) max = counter;
            counter = 1;
            continue;
        }
        counter++;
        if(i == n - 2 && max < counter) max = counter;
    }
    cout << max << endl;

    return 0;

}