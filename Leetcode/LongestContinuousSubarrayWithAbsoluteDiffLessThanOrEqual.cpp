//test case passed, but took too long 
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i,j,max = 0, len = nums.size();
        int counter, big,smol;
        for(i = 0; i < len; i++){
            counter = 1;
            big = nums[i];
            smol = nums[i];
            for(j = i + 1; j < len; j++){
                if(big < nums[j]) big = nums[j];
                if(smol > nums[j]) smol = nums[j];
                if(nums[j] == nums[i]){
                    counter++;
                    continue;
                }
                if(abs(nums[j] - nums[i]) > limit){
                    break;
                }
                if(abs(big - nums[j]) > limit){
                    break;
                }
                if(abs(smol - nums[j]) > limit){
                    break;
                }
                counter++;
                
            }
            if(max < counter) max = counter;
            if(max > 0.8 * len) break;
        }
        return max;
    }
};
