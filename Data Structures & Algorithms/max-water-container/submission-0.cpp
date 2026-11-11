class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int w=0,h=0;
        int mx=0;
        while(l<=r){
            h=min(heights[l],heights[r]);
            w=r-l;
            mx=max(mx,h*w);
            if(heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return mx;
    }
};
