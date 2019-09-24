#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mapping;
        unordered_map<int,int>::iterator ptr;
        for(int i=0;i<nums.size();i++){
            ptr=mapping.find(target-nums[i]);
            if(ptr!=mapping.end()){
                ans.push_back(ptr->second);
                ans.push_back(i);
                return ans;
            }
            else
                mapping.insert(make_pair(nums[i],i));
        }
        return ans;
    }
};

int main(){
    Solution twosum;
    vector<int> nums={2,7,11,15};
    vector<int> ans=twosum.twoSum(nums,9);
    for(vector<int>::iterator i=ans.begin();i<ans.end();i++)
        cout<<*i<<endl;
    
    return 0;
}