class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)return 1;
        int n=s.length();
        int l=0;
        int r=1;
        int freq[128]={0};
        int mx=0;
        freq[s[l]]++;
        while(r<n){
            if(freq[s[r]]){
            while(s[l]!=s[r]){
                freq[s[l++]]--;
            }l++;r++;
            }
            else freq[s[r++]]++;
            mx=max(mx,r-l);
        }
        return mx;
    }
};
