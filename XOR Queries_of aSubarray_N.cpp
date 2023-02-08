class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        //idea is to calculate the prefix xor & for each query (x,y) if it start with 0 go for dirct prefix value else go with xor of (0,y)^(0,x-1)
        vector<int>res;
        for(int i=1;i<arr.size();i++){
            arr[i]= arr[i]^arr[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int x=queries[i][0];
            int y=queries[i][1];
            if(x==0){
                res.push_back(arr[y]);
            }else{
                int val=arr[y]^arr[x-1];
                res.push_back(val);
            }
        }
        return res;
        
    }
};
