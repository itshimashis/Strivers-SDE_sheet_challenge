class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x1=0;
        int x2=0;
        int x3=0;
        for(auto &it:nums){
            if(it==0) x1++;
            else if(it==1) x2++;
            else if(it==2) x3++;
        }
       // nums.clear();
        for(int i=0;i<x1;i++){
            nums[i]=0;
        }
        for(int i=0;i<x2;i++){
            nums[i+x1]=1;
        }
        for(int i=0;i<x3;i++){
            nums[i+x1+x2]=2;
        }
    }
};
