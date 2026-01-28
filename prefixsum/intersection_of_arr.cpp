class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_set<int>m(nums1.begin(),nums1.end());
        unordered_set<int>result;
        for(int num:nums2){
            if(m.find(num)!=m.end()){
                result.insert(num);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};