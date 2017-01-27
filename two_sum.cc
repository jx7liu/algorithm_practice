class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map <int, int> hash;
            vector <int> result;
            int l = nums.size();
            for (int i = 0; i < l; i++) {
                int f = target - nums[i];
                if (hash[f] != 0) {
                    result.push_back(hash[f] -1);
                    result.push_back(i);
                    break;
                }
                hash[nums[i]] = i + 1;
                
            }
            return result;
    }
};
