class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> hi;
        for(auto a:m){
            hi.push_back({a.second,a.first});
        }
        sort(hi.rbegin(),hi.rend());
        vector<int>v;
        for(auto hey:hi){
            if(k==0)return v;
            k--;
            v.push_back(hey.second);
        }
    }
};
