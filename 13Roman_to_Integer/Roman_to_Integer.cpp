class Solution {
public:
    int romanToInt(string s) {
        //roman tanslate table
       map<char,int> romantrans={
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50},
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
       };
       int totalnum=0;
       int count=s.size()-1;
       
       try{
           
           while(count>-1){
               if(romantrans.find(s[count])==romantrans.end())
                   throw 0; // char is not in table
               else if((romantrans.find(s[count]))->second >(romantrans.find(s[count-1]))->second){
                    totalnum+= (((romantrans.find(s[count]))->second) - ((romantrans.find(s[count-1]))->second));   
                    count--;
               }
               else {
                   totalnum+=romantrans[s[count]];
               }
               count--;
           }

           
       }
       catch(int err){
               cout<<"err"<<endl;
       }
        
    return totalnum;
    }
};