#include <vector>
using std::swap;

class Solution {
    private: void helper (vector<int>& n, int begin, vector<vector <int>>& r) {
        if (begin >= n.size()) {
            r.push_back(n);
        }
        else {
            for (int i = begin; i<n.size(); i++){
                swap (n[begin], n[i]);
                helper(n, begin+1, r);
                swap (n[i], n[begin]);
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> p;
        helper (nums, 0, p);
        return p;
    }
};
