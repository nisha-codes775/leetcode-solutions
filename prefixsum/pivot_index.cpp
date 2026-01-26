class Solution {
    private:
    vector<int>prefix;
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        prefix.resize(n);
        int sumleft=0;
        int sumright=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        
        for(int i=0;i<n;i++){
            
            sumright=sum-sumleft-nums[i];
            if(sumleft!=sumright){
                sumleft=sumleft+nums[i];
            }
            else{
                return i;
            }
        }
        return -1;

    }
};