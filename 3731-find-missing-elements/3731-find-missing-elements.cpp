class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
         for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] <= 1) {
                continue;
            } else {
              
                for (int j = nums[i]; j <nums[i+1]-1; j++) {
                    ans.push_back(j+1);
                }
            }
        }
        return ans;
    }
};