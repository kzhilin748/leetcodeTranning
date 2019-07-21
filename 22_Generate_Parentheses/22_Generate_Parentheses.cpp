#include "22_Generate_Parentheses.h"

    std::vector<std::string> Solution::generateParenthesis(int n) {
        std::vector<std::string> ret;
        DFSsearch(n,n,"",ret);
        return ret;
    }
    void Solution::DFSsearch(int left,int right,std::string str,std::vector<std::string>& ret){
        if(left>right)
            return;
        else if (left==0&&right==0){
            ret.push_back(str);
        }
        else{
            if(left>0)
                DFSsearch(left-1,right,str+'(',ret);
                DFSsearch(left,right-1,str+')',ret);
        }
    }
