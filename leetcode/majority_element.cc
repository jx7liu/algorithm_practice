#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int count = 0;
     int m;
     for(int n: nums){
         if (count == 0){
             m = n;
             count++;
         } else if (m == n){count++;}
         else {count--;}
         
     }
     return m;
    }
};
