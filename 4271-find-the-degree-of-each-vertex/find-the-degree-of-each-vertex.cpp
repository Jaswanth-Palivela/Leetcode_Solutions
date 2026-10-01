class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j < nums.size(); j++) {
                sum += nums[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};