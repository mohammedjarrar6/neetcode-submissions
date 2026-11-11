class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            int k=-nums[i];
            int ans=nums[l]+nums[r];
            while(l<r){
                
                if(ans==k&&i!=l&&i!=r&&l!=r){
                    s.insert({nums[i],nums[l],nums[r]});
                    if(l<r&&nums[l+1]==nums[l])l++;
                    else if(r>l&&nums[r-1]==nums[r])r--;
                    else{
                        ans=0;
                        ans+=nums[--r];
                        ans+=nums[++l];
                    }
                }
                else if(ans<k){
                    ans-=nums[l++];
                    ans+=nums[l];
                }
                else if(ans>k){
                    ans-=nums[r--];
                    ans+=nums[r];
                }
            }
        }
        for(auto a:s){
            v.push_back(a);
        }
        return v;
    }
};
