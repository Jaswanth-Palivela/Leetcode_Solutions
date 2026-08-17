class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& [num, freq] : count) {
            bucket[freq].push_back(num);
        }
        vector<int> ans;
        for (int freq = nums.size(); freq >= 1; freq--) {
            for (int num : bucket[freq]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        return ans;
    }
};