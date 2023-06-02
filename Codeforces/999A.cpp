#include <bits/stdc++.h>
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);
#define FOR(i,n) for(i = 0; i < n; i++)

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL
    
    vector<int> prob;
    int n,k,num,i;
    int l,r, pass = 0;
    cin >> n >> k;
    l = 0; r = n-1;
    FOR(i,n){
        cin >> num;
        if(num > k) pass = 1;
        prob.push_back(num);
    }
    if(!pass) {
        cout << n;
        return 0;
    }
    num = 0;
    while(l != r){
        if(prob[l] <= k){
            num++;
            l++;
        } else {
            l = -1;
        }
        if(prob[r] <= k){
            num++;
            r--;
        } else {
            r = -1;
        }
    }
    cout << num;
    
    return 0;

}