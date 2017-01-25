#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> m;
        vector <int> p;
        for (auto n: nums1) m[n]++;
        for (auto n :nums2){
            if (--m[n] >= 0) p.push_back(n); 
        }
        return p;
    }
};
