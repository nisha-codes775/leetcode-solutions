class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        if(s.length()!=t.length()){
            return false;
        }
        for(char num:s){
            m[num]++;
        }
        for(char ch:t){
            if(m.find(ch)==m.end() || m[ch]==0){
                return false;
            }else{
                m[ch]--;
            }
        }
        return true;
    }
};