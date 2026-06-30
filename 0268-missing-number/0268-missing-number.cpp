class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int res = 0;
        for(int i = 0; i<=nums.size(); i++){
            if(!s.count(i)){
                res = i;
            }
        }
        return res;
    }
};