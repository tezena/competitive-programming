class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n + 2, 0);
        for(int i = 0; i < bookings.size(); ++i){
            v[bookings[i][0]] += bookings[i][2];
            v[bookings[i][1] + 1] += -bookings[i][2];
        }
        
        vector<int> res;
        int counter = 0;
        for(int i = 1; i <= n; ++i){
            counter += v[i];
            res.push_back(counter);
        }
        
        return res;
    }
};
