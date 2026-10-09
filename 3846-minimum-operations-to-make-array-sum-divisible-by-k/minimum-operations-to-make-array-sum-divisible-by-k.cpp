class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        long long sum = 0;
        for (int x : n) {
            sum += x;
        }
        return sum % k;
    }
};