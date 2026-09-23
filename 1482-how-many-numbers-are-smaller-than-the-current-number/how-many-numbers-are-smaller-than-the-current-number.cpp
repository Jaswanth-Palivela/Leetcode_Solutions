class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int pos = lower_bound(arr.begin(), arr.end(), nums[i]) - arr.begin();
            ans.push_back(pos);
        }

        return ans;
    }
};