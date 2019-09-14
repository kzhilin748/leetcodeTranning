class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3) return false;
        bool up=false,down=false;
        for(int i=0;i<A.size()-1;i++){
            if(A[i]<A[i+1]){
                if(down) return false;
                up=true;
            }
            else if(A[i]>A[i+1]){
                if(!up) return false;
                down = true;
            }
            else 
                return false;
        }
        
        return up&down;
    }
};