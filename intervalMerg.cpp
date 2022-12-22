class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> tempInterval;
    vector<int> tempVec;
    sort(intervals.begin(),intervals.end());
        tempVec=intervals[0];
for(vector<int> tmp: intervals){
      if(tmp[0]<=tempVec[1]){
        tempVec[1]=max(tmp[1],tempVec[1]);
      }else{
        tempInterval.push_back(tempVec);
        tempVec=tmp;
      }
}
tempInterval.push_back(tempVec);
return tempInterval;
    }
};
