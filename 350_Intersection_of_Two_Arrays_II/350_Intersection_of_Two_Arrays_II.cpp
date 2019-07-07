class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> Rvector;
        if(nums1.empty()||nums2.empty()){
            return Rvector;
        }
        mysort(nums1);mysort(nums2);
        std::vector<int>::iterator it1=nums1.begin();
        std::vector<int>::iterator it2=nums2.begin();
        while(it1!=nums1.end()&&it2!=nums2.end()){
            std::cout<<*it1<< ' '<<*it2<<std::endl;
            if(*it1==*it2){
                Rvector.push_back(*it1);
                it1++;it2++;
            }
            else if(*it1>*it2){
                it2++;
            }
            else{
                it1++;
            }
        }
        return Rvector;
    }
private:
    void mysort (vector<int>& list){
        std::sort(list.begin(),list.end());
    }
};