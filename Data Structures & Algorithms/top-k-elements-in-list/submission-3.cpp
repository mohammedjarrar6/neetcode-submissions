class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>cnt;
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto hi:cnt){
            bucket[hi.second].push_back(hi.first);
        }
        vector<int>v;
        int n=nums.size();
        for(int i=n;i>=1&&k!=0;i--){
            for(auto he:bucket[i]){
                v.push_back(he);
                k--;
            }
        }
        return v;
    }
};
