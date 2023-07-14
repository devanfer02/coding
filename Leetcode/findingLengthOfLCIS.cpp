class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size(), ans=1,res=-1;
        if(n == 1) return 1;
        for(int i=0,j=1;j < n;) {
            if(nums[i]<nums[j]){
                ans++;
                j++; i++;
            } else {
                ans=1;
                i=j;
                j=j+1;
            }
            res = max(res,ans);
        }
        return res;
    }
};