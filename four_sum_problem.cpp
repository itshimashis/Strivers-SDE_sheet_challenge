class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                long long int sum1=nums[i]+nums[j];
                int left=j+1,right=nums.size()-1;
                while(right>left){
                     long long int sum=sum1+nums[left]+nums[right];
                     if(sum==target){
                         ans.insert({nums[i],nums[j],nums[left],nums[right]});
                         left++;
                         right--;
                     }
                     else if(sum>target){
                         right--;
                     }
                     else left++;
                }
            }
        }
            vector<vector<int>>val;
        for(auto &it:ans) val.push_back(it);
        return val;
    }
};
