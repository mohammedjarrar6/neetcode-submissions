class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>ss,tt;
        if(s.length()!=t.length())return false;
        for(int i =0;i<s.length();i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }
        for(auto i :ss){
            if(ss[i.first]!=tt[i.first]) return false;
        }
        return true;
    
    }
};
