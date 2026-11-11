class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.length()==0)return 0;
        int n=s.length();
        unordered_map<int,int>m;
        int mx=1;
        int l=0;
        int r=0;
        int ans=0;
        while(r<n){
            int mxfr=0;
            m[s[r]]++;
            for(auto a:m){
                mxfr=max(a.second,mxfr);
            }
            if(r-l+1-mxfr<=k){
                mx=max(r-l+1,mx);
            }
            else {
                m[s[l++]]--;
            }
            r++;
        }
        return mx;
    }
};
