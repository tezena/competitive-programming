class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    vector<int> answer;
    for(int i=0;i<nums1.size();i++){
          int indx=-1;
         for(int j=0;j<nums2.size();j++){
             
             if(nums1[i]==nums2[j]){
                 indx=j;
                 break;
             }
         }
         for(indx;indx<nums2.size();indx++){
             if(nums2[indx]>nums1[i]){
                 answer.push_back(nums2[indx]);
                 break;
             }else if(indx==nums2.size()-1){
                 answer.push_back(-1);
             }
         }
    }
    return answer;
        
    }
};
