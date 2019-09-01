#include "SpiralMatrix.h"

vector<int> Solution::spiralOrder(vector<vector<int> > &matrix){
    vector<int> result;
    if(matrix.empty()||matrix[0].empty()) return result;
    int m=matrix.size() ,n= matrix[0].size();
    int up=0,down=m-1,left=0,right=n-1;
    
    while(1){
        for(int i=left;i<=right;i++) result.push_back(matrix[up][i]);
        up++;
        if(up>down) break;
        for(int i=up;i<=down;i++) result.push_back(matrix[i][right]);
        right--;
        if (right < left) break;
        for(int i=right;i>=left;i--) result.push_back(matrix[down][i]);
        down--;
        if(down<up) break;
        for(int i=down;i>=up;i--) result.push_back(matrix[i][left]);
        left++;
        if(left>right) break;
    }
    return result;
}