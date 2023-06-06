class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while(right-left>0){
            int mid=left+(right-left)/2;
            if(nums[mid]==mid+1){
                left=mid+1;
            }
            else{
                if(nums[mid]>mid+1){
                    left=mid;
                }
                else{
                    right=mid;
                }
            }
        }
        cout<<left<<" "<<right;
        if(nums[left]!=left+1) return left;
        else return right;
        
    }
};
