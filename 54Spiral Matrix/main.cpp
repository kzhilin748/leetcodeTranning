#include "SpiralMatrix.h"

int main(int argc, char const *argv[])
{
    Solution SpiralMatrix;
    vector<vector<int> > TestMatrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> res=SpiralMatrix.spiralOrder(TestMatrix);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<' ';
    return 0;
}
