class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>h;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(h.contains(target-nums[i])){
                v.push_back(i);
                v.push_back(h[target-nums[i]]);
                break;
            }
            h[nums[i]]=i;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
