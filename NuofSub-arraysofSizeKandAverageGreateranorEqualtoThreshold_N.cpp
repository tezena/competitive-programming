class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0,window_sum=0;
        for(int i=0;i<k;i++){
            window_sum+=arr[i];
        }
        if((window_sum/k)>=threshold){
            cnt++;
        }
        for(int i=k;i<arr.size();i++){
            window_sum-=arr[i-k];
            window_sum+=arr[i];
            if((window_sum/k)>=threshold){
                cnt++;
            }
        }
        return cnt;
        
    }
};
