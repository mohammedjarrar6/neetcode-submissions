class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,vector<string>>m;
        for(auto skbd:strs){
            string s=skbd;
            sort(s.begin(),s.end());
            m[s].push_back(skbd);
        }
        for(auto hi:m){
            v.push_back(hi.second);
        }
        return v;
    }
};
