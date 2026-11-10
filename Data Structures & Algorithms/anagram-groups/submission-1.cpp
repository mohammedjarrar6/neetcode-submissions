class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        map<vector<int>,vector<string>>m;
        for(int i =0;i<strs.size();i++){
            vector<int> cnt(26,0);
            for(int j=0;j<strs[i].length();j++){
                cnt[strs[i][j]-'a']++;
            }
            m[cnt].push_back(strs[i]);
        }
        for(auto hi: m){
            v.push_back(hi.second);
        }
        return v;
    }
};
