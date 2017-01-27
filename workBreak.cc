class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if (wordDict.size() == 0) return false;
        vector <bool> dup(s.size() + 1 , false);
        int l = s.size();
        dup[0] = true;
        for (int i = 1; i <= l; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (dup[j]) {
                    string word = s.substr(j, i - j);
                    if (ifExist(wordDict, word) == true){
                        dup[i] = true;
                        break;
                    }
                }
                
            }
            
        }
        return dup[s.size()];
    }
    
    bool ifExist (vector<string>& wordDict, string s) {
        for (int i = 0; i < wordDict.size(); i++) {
            if (wordDict[i] == s) {return true;}
            
        }
        return false;
    }
};

