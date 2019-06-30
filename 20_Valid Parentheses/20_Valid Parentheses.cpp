class Solution {
2
public:
3
    
4
    bool isValid(string s) {
5
        vector<char> chstack;
6
        string::iterator ptr=s.begin();
7
 
8
        
9
        while(*ptr){
10
            if(*ptr==')'){
11
                if(chstack.empty()||chstack.back()!='(')
12
                    return false;
13
                else
14
                chstack.pop_back();
15
            }
16
            else if(*ptr==']'){
17
                if(chstack.empty()||chstack.back()!='[')
18
                    return false;
19
                else
20
                chstack.pop_back();
21
            }
22
            else if(*ptr=='}'){
23
                if(chstack.empty()||chstack.back()!='{')
24
                    return false;
25
                else
26
                chstack.pop_back();
27
            }
28
            else{
29
                chstack.push_back(*ptr);
30
            }
31
                
32
                
33
        ptr++;
34
        }
35
        return (chstack.size()==0);
36
        
37
    }
38
};
