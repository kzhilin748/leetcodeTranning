class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(!s.size()) return true;
        int sSize=0,tSize=0;
        while(sSize<=s.size()&&tSize<=t.size()){
            if(sSize==s.size())
                return true;
            else if(s[sSize]==t[tSize])
                sSize++;
            tSize++;
            
        }
        
        return false;
    }
};