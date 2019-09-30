// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(),A.end());
    int start=0,end=A.size()-1;
    if(A.empty()) return 1;
    else if(A[start]==2) return 1;
    else if(A[end]==A.size()) return A.size()+1;
    
    while((start+1)<end){
        int mid=start+(end-start)/2;
        if(A[mid]!=(mid+1)){
            end=mid;   
        }
        else if(A[mid]==(mid+1))
            start=mid;
    }
    return A[start]+1;
}

/* 複雜度nlogn score 100%