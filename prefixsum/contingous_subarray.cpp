class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>prefix(n,0);
        if(nums[0]==0){
            prefix[0]=-1;
        }else{
            prefix[0]=1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==0){
                prefix[i]=prefix[i-1]-1;
            }else{
                prefix[i]=prefix[i-1]+1;
            }
        }
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            if(m.find(prefix[i])!=m.end()){
                int len=i-m[prefix[i]];
                count=max(len,count);
            }else{
                m[prefix[i]]=i;
            }
        }
        return count;
    }
};