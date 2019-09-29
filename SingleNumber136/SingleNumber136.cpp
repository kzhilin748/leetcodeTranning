class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};

//@hashmap

class Solution2 { 
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> myhashmap;
        for(int i=0;i<nums.size();i++){
            if(myhashmap.find(nums[i])==myhashmap.end())
                myhashmap.insert(pair<int,int>(nums[i],i));
            else
                myhashmap.erase(myhashmap.find(nums[i]));
        }
        return myhashmap.begin()->first;
    }
};