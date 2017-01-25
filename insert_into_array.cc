class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = nums.size();
        int i = 0;
        while(i < l && nums[i] <= target){
            if (nums[i] == target) return i;
            i++;
        }
        return i;
    }
};
