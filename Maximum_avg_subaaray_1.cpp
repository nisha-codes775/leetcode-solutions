class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=k-1;
        double sum=0;
        double maxsum;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        for(int i=k;i<n-1;i++){
            sum=sum+nums[i]-nums[i-k];
            maxsum=max(maxsum,sum);
        }
        return double(maxsum)/k;
    }
};