class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> mppS;
        unordered_map<char, int> mppT;

        for(char ch : s){
            mppS[ch]++;
        }

        for(char ch : t){
            mppT[ch]++;
        }
        return mppS == mppT;
    }
};
