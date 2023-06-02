#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int linearSearch(int *arr, int n, int trg){
    int i, count = 0;
    FOR(i,n){
        if(*(arr+i) == trg){
            count++;
        }
    }
    return count;
}

int main(){
    IOS_FALSE
    CIN_NULL

    int n,i,max = 0, count;
    cin >> n;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }
    cout << linearSearch(arr,n,max);
    return 0;
}
