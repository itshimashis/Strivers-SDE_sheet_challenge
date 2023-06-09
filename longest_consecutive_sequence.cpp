class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int prev;
        int ans=1;
        int temp=1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                prev=nums[i];
            }
            if(nums[i]==prev+1){
                temp++;
                ans=max(ans,temp);
                prev=nums[i];
            }
            else if(nums[i]==prev) continue;
            else{
                prev=nums[i];
                temp=1;
            }
        }
        return ans;
    }
};
