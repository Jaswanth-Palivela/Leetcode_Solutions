class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt +=nums[i];
            sum.push_back(cnt);
        }
          return sum;
    }
};