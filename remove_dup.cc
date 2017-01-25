#include <map>
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map <int, int> m;
        int l = nums.size();
        
        for (int i = 0; i < l; i++){
            if (m[nums[i]]++ >= 2) {
                nums.erase(nums.begin() + i);
                i--;
                l--;
                continue;
            }
        }
        return l;
    }
};
