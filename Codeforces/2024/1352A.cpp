#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int num;
    cin >> num;

    if((!(num % 1000) && !(num % 100) && !(num % 10)) || num <= 10){
        cout << 1 << endl;
        cout << num << endl;
        return;
    }

    int dvd = 10,i;
    vector<int> nums;
    FOR(i,4){
        if(!(num % 1000) && !(num % 100) && !(num % 10)){
            if(num){
                nums.push_back(num);     
            }
            break;
        }
        if(num % dvd != 0){
            nums.push_back(num % dvd);
            num -= num % dvd;
        }
        dvd *= 10; 
        
    }

    cout << nums.size() << "\n";
    for(int n : nums){
        cout << n << " ";
    }
    cout << "\n";
}

int main(){
    IOS_FALSE
    CIN_NULL

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    
    return 0;
}
