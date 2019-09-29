class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.back()<target) return nums.size();
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start);
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start=mid+1;
            else end=mid;
        }
        return end;
    }
};