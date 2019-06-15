class Solution {
public:
    int romanToInt(string s) {
        
        int totalnum=0;
        int stringSize=s.size()-1;
        while(stringSize>=0){
            
            if(s[stringSize]=='I'){
                totalnum+=1;
            }   
            if(s[stringSize]=='V'){
                totalnum+=5;
                if((stringSize-1)>=0 && s[stringSize-1]=='I'){
                    totalnum-=1;
                    stringSize--;
                }
                    
            }
            else if(s[stringSize]=='X'){
                totalnum+=10;
                if((stringSize-1)>=0 &&s[stringSize-1]=='I'){
                    totalnum-=1;
                    stringSize--;
                }
                    
            }
            else if(s[stringSize]=='L'){
                totalnum+=50;
                if((stringSize-1)>=0 &&s[stringSize-1]=='X'){
                    totalnum-=10;
                    stringSize--;
                }
                    
            }
             else if(s[stringSize]=='C'){
                totalnum+=100;
                if((stringSize-1)>=0 &&s[stringSize-1]=='X'){
                    totalnum-=10;
                    stringSize--;
                }
                    
            }           
            else if(s[stringSize]=='D'){
                totalnum+=500;
                if((stringSize-1)>=0 &&s[stringSize-1]=='C'){
                    totalnum-=100;
                    stringSize--;
                }
                    
            }
            else if(s[stringSize]=='M'){
                totalnum+=1000;
                if((stringSize-1)>=0 && s[stringSize-1]=='C'){
                    totalnum-=100;
                    stringSize--;
                }
                    
            } 
 //           cout<< totalnum <<"  " <<stringSize<<"  "<< s[stringSize]<<endl;
            stringSize--;

        } 
        return totalnum;
    }
};

