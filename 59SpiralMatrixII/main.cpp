#include "SpiralMatrixII.h"

int main(int argc, char const *argv[])
{
    Solution TEST;
    
    vector<vector<int> > res=TEST.generateMatrix(3);
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
