class Solution{
public:
    vector<int> twoSum (vector<int>&arr,int target){
        vector<int>res;
        sort(arr.begin(),arr.end());
        for(int i=0,j=arr.size()-1;i<j;) {
            if(arr[i]+arr[j]>target) {
                j--;
            } else if(arr[i]+arr[j]<target) {
                i++;
            } else {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
        }   
        return res;
    }
};