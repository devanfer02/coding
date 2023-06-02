#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int num, n = nums.size();
    if(n == 1) return nums[0];
    for(int i = 0; i < n ;i++){
        if(i == n - 1){
            if(nums[i] != nums[i - 1]){
                num = nums[i];
            }
        }
        if(nums[i] == nums[i + 1]){
            i++;
            continue;
        }
        num = nums[i];
    }
    return num;
}

int main(){
    vector<int> nums = {4,1,2,4,1,5,7,5,7};
    cout << singleNumber(nums);

    return 0;
}
