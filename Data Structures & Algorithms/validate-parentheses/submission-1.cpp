class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        unordered_map<char,char>m ={{'(',')'},
        {'[',']'},
        {'{','}'}
        };

        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')p.push(s[i]);
            else {
                if(p.empty()||s[i]!=m[p.top()])return false;
                p.pop();
            }
        }
        return p.empty();
    }
};
