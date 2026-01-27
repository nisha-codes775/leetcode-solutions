class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>m(nums.begin(),nums.end());
        int longest=0;
        for(int num:m){
            if(m.find(num-1)==m.end()){
                int current=num;
                int count=1;

                while(m.find(current+1)!=m.end()){
                    current++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};