class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1&&nums[0]==target){
            return {0,0};
        }
        int l=0,r=nums.size()-1,m,n=nums.size();
        bool d1=1,d2=1;
        vector<int>ans = {-1,-1};
        while(l<=r) {
            m = (l + r) / 2;
            if(nums[m]==target){
                ans[0]=ans[1]=m;
                break;
            } 
            if(nums[m]<target) {
                l=m+1;
            } else {
                r=m-1;
            }
        }
        if(ans[0]==-1) return ans;
        while(d1||d2){
            if(ans[0]-1 >=0 && nums[ans[0]-1]==target)
                ans[0]--;
            else 
                d1=0;
            if(ans[1]+1 < n && nums[ans[1]+1]==target)
                ans[1]++;
            else
                d2=0;
        }
        return ans;
    }
};  