#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std; 


void test(){
    ll n;
    ll army = 0,num;
    cin >> n;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num) pq.push(num);
        if(!num){
            if(!pq.empty()){
                army += pq.top();
                pq.pop();
            }
        }
    }

    cout << army << endl;
}

int main() { 
    fastio
    int t;
    cin >> t;
    while(t--) test();
    

    return 0;
}