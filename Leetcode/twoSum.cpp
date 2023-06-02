class Solution{
public:
    vector<int> twoSum (vector<int>&arr,int target){
        vector<int>res;
        map<int,int>data;
        for(int i = 0; i < arr.size(); i++){
            if(data.count(arr[i]) > 0){
                res.push_back(data[arr[i]]);
                res.push_back(i);
                break;
            }
            data[target-arr[i]] = i;
        }
        return res;
    }
};
