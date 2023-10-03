class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> T;
        int i = 0, j = 1;
        for (i = 0; i < nums.size(); i++){
            for (j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    T.push_back(i);
                    T.push_back(j);

                    return T;
                }
            }
        }

        return T;
    }
};
