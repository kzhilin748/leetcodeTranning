class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        std::vector<vector<int>> Rresult;
        if(nums.empty() || nums.back() < 0 || nums.front() > 0)
            return Rresult;
        std::vector<int>::iterator ptr=nums.begin();
        while(ptr!=nums.end()){
            if((*ptr)>0)
                break;
            if(ptr!=nums.begin()&&(*ptr)==(*(ptr-1))){
                ptr++;
                continue;
            }
            else{
                std::vector<int>::iterator start=ptr+1;
                auto end=nums.end()-1;
                while(start<end){
                    if(*ptr+*start+*end==0){
                        Rresult.push_back({*ptr,*start,*end});
                        while(start<end&&(*start)==*(start+1))
                            start++;
                        while(start<end&&(*end)==*(end-1))
                            end--;
                        start++;
                        end--;
                    }
                    else if(*ptr+*start+*end<0)
                        start++;
                    else
                        end--;
                }
            }
            ptr++;
        }
        return Rresult;
    }
};