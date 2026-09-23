class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>aarr=heights;
        sort(aarr.begin(),aarr.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=aarr[i]){
                cnt++;
            }
        }
        return cnt;
    }
};