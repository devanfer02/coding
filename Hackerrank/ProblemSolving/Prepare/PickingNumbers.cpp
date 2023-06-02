#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL

    int a,b;
    int n,i,j;
    int count,max = 0;
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }

    int arr[n];
    FOR(i,n){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(i = 0; i < n; i++){
        a = arr[i];
        count = 1;
        for(j = i + 1; j < n; j++){
            if(a == arr[j]){
                count++;
                continue;
            }
            if(abs(arr[j] - a) > 1) {
                i = j - 1;
                break;
            }
            count++;
        }
        if(max < count) max = count;
    }

    cout << max;
    return 0;
}
