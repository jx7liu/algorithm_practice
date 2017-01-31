#include <vector>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector <int> a;
        for (int i = 0; i <len; i++) {
            int m = abs(nums[i]) - 1;
            nums[m] = nums[m] > 0? -nums[m] : nums[m];
            
        }
        
        for (int i = 0; i <len; i++){
            if (nums[i] > 0) a.push_back(i+1);
        }
        return a;
    }
};
