#ifndef GENERATE_PARENTHESES_
#define GENERATE_PARENTHESES_
#include <vector>
#include <iostream>
#include <string>
#endif

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n);
    void DFSsearch(int ,int ,std::string ,std::vector<std::string>&);
};
