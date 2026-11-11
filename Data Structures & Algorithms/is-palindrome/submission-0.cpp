class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        string news = "";
        for (char c : s) {
            if (isalnum(c)) news += tolower(c);
        }
        int r=news.length()-1;
        while(l<r){
            if(news[l]!=news[r])return false;
            r--;
            l++;
        }
        return true
;
    }
};
