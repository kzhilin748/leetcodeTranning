#include <iostream>
#include "22_Generate_Parentheses.h"

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<std::string> result=s.generateParenthesis(10);
    for(auto a:result)
        std::cout<<a<<std::endl;
    return 0;
}
