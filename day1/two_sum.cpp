class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        bool flag = false;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    flag = true;
                    break;
                }
            }
            if(flag)break;
            
        }
        return result;
    }
};
