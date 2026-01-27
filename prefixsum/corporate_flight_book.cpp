class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n,0);
        for(auto &v:bookings){
            int first=v[0];
            int last=v[1];
            int seats=v[2];

            diff[first-1]+=seats;
            if(last<n){
                diff[last]-=seats;
            }
        }

        for(int i=1;i<n;i++){
            diff[i]=diff[i]+diff[i-1];
        }
        return diff;
    }
};

 