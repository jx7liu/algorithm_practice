#include <vector>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0;
        int max_sum = nums[0];
        int l = nums.size();
        
        for (int i = 0; i < l; i++) {
            cur_sum += nums[i];
            max_sum = max(cur_sum, max_sum);
            cur_sum = max (cur_sum, 0);
        }
        return max_sum;
    }
};
