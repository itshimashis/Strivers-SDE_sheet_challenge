class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      //  bool flag=true;
        int ind=-1;
        for(int i=nums.size()-1;i>0;--i){
            if(nums[i-1]<nums[i]){
                ind=i-1;
                break;
            }
        }
        if(ind==-1) {reverse(nums.begin(),nums.end());return;}
        for(int i=nums.size()-1;i>ind;--i){
           if(nums[i]>nums[ind]) {swap(nums[ind],nums[i]); break;}
        }
        reverse(nums.begin()+ind+1,nums.end());}
};
