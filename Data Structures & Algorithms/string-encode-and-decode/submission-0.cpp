class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto a:strs){
            s.append(to_string(a.length()));
            s.append("#");
            s.append(a);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>v;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#')j++;
            int len=stoi(s.substr(i,j-i));
            v.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return v;
    }
};
