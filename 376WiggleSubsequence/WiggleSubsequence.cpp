#include "WiggleSubsequence.h"

int Solution::wiggleMaxLength(vector<int>& nums){
    if(nums.size()<2)
        return nums.size();
    int p=1,n=1,size=nums.size();

    for(int i=1;i<size;i++){
        if(nums[i]>nums[i-1]) p=n+1;
        else if(nums[i]<nums[i-1]) n=p+1;
    }

    return min(size,max(p,n));
}