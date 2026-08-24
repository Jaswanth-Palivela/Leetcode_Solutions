class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
        int size = n.size();
        for (int i = 0; i < size; i++) {
            while (n[i] > 0 && n[i] <= size && n[n[i] - 1] != n[i]) {
                swap(n[i], n[n[i] - 1]);
            }
        }
        for (int i = 0; i < size; i++) {
            if (n[i] != i + 1) {
                return i + 1;
            }
        }
        
        return size + 1;
    }
};