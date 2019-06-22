class Solution {
public:
    bool isPalindrome(string s) {
        std::string::iterator left=s.begin();
        std::string::iterator right=s.end();
        while(left<right){
            if(!chkletter(*left)) left++;
            else if(!chkletter(*right)) right--;
            else if(((*left+32-'a')%32)!=((*right+32-'a')%32))
                return false;
            else {
                left++;
                right--;
            }
            
        }
        return true;
    }
    static bool chkletter(char &tmp){
        if(tmp>='a'&&tmp<='z') return true;
        else if(tmp>='A'&&tmp<='Z') return true;
        else if(tmp>='0'&&tmp<='9') return true;
        else return false;
    }
};