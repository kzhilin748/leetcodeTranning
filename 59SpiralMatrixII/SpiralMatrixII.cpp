#include "SpiralMatrixII.h"

vector<vector<int> > generateMatrix(int n) {
    vector<vector<int> > result(n,vector<int>(n, 0));
    if(n==0) return result;
    
    int up=0,down=n-1,left=0,right=n-1,tmp=1;
    
    while(1){
        for(int i=left;i<=right;i++) result[up][i]=tmp++;
        up++;
        if(up>down) break;
        for(int i=up;i<=down;i++) result[i][right]=tmp++;
        right--;
        if (right < left) break;
        for(int i=right;i>=left;i--) result[down][i]=tmp++;
        down--;
        if(down<up) break;
        for(int i=down;i>=up;i--) result[i][left]=tmp++;
        left++;
        if(left>right) break;
    }
    return result;
}