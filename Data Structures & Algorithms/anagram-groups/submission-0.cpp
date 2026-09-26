class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(auto str : strs){
            string s = str;
            sort(s.begin(), s.end());
            if(mpp.count(s)){
                mpp[s].push_back(str);
            }
            mpp.insert({s, {str}});
        }

        vector<vector<string>> arr;

        for(auto& it : mpp){
            arr.push_back(it.second);
        }

        return arr;
    }
};
