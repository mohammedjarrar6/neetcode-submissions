class Solution {
public:
    struct cmp{
        bool operator()(const vector<int>&v1,const vector<int>&v2){
            return v1[1]<v2[1];
        }
    };
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp());
        int n=intervals.size();
        int cnt=0;
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(res.back()[1]>intervals[i][0]){continue;}
            res.push_back(intervals[i]);
        }
        return intervals.size()-res.size();
    }
};
