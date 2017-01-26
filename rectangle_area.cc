#include <stack>


class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area = abs(C-A)*abs(D-B) + abs(G-E)*abs(H-F);
        if (C<=E || A>=G || B>=H || D<=F) return area;
        
        else {
            vector <int> h;
            h.push_back(B);
            h.push_back(D);
            h.push_back(F);
            h.push_back(H);
            
            vector <int> w;
            w.push_back(A);
            w.push_back(C);
            w.push_back(E);
            w.push_back(G);
            
            sort(w.begin(), w.end());
            sort(h.begin(), h.end());
            return area-(w[2]-w[1])*(h[2]-h[1]);
        }
    }
};
