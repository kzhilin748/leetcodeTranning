// you can use includes, for example:
// #include <algorithm>
#include <numeric>
#include <math.h>
 #include <climits>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int listSum=accumulate(A.begin(), A.end(), 0);
    int Minans=INT_MAX;
    int head=0;
    for(int i=1;i<A.size();i++){
        head+=A[i-1];
        listSum-=A[i-1];
        //cout<<i<<" "<<abs(head-listSum)<<endl;
        if(abs(head-listSum)<Minans){
            
            Minans=abs(head-listSum);
        }
    }
    return Minans;
    
}