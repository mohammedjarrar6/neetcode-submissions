class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size()+1,0);
        vector<int> post(nums.size()+1,0);
        int n=nums.size();
        pre[0]=1;
        post[n]=1;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]*nums[i];
        }
        for(int i=n-1;i>=0;i--){
            post[i]=post[i+1]*nums[i];
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(pre[i]*post[i+1]);
        }
        return v;
    }
};
