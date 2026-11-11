class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int mx=0;
        int n=prices.size();
        while(r<n){
            mx=max(mx,prices[r]-prices[l]);
            if(prices[r]<prices[l]){l=r++;}
            else r++;
        }
        return mx;
    }
};
