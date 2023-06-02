#include <bits/stdc++.h>
#define lli long long int 
#define ull unsigned long long
#define fill(arr,args) memset(arr,args,sizeof(arr));
using namespace std;

class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>fct;
        int t;
        for(int n : nums){
            t = 2;
            while(t*t <= n){
                while(!(n % t)){
                    n /= t;
                    fct.insert(t);
                }
                t++;
            }
            if(n > 1){
                fct.insert(n);
            }
        }
        return fct.size();

        
    }
};
