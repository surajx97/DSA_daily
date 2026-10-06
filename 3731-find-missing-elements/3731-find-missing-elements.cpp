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
                int range = nums[i + 1] - nums[i];
                for (int j = 1; j < range; j++) {
                    ans.push_back(nums[i] + j);
                }
            }
        }
        return ans;
    }
};