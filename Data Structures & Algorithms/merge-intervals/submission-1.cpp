class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>newi;
        newi.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=newi[newi.size()-1][1]){
                newi.back()[1]=max(intervals[i][1],newi.back()[1]);
            }
            else newi.push_back(intervals[i]);
        }
        return newi;
    }
};
