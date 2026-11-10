class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]=1;
        }
        int k=1;
        int mx=0;
        vector<int>v;
        for(auto hi : m){
            if(!m.count(hi.first-1)){
                v.push_back(hi.first);
            }
        }
        for(int i=0;i<v.size();i++){
            int j=1;
            while(true){
                if(m.count(v[i]+j)){
                    k++;
                    j++;
                }
                else break;
            }
            mx=max(mx,k);
            k=1;
        }
        return mx;
    }
};
