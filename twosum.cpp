class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // vector<int>ans;
       vector<pair<int,int>>v;
       for(int i=0;i<nums.size();i++) v.push_back(make_pair(nums[i],i));
       sort(v.begin(),v.end());
        int left=0;
        int right=nums.size()-1;
        while(right>left){
            if(v[left].first+v[right].first==target) return {v[left].second,v[right].second};
            else if(v[left].first+v[right].first>target){
                right--;
            }
            else{
                left++;
            }
        }
        return {v[left].second,v[right].second};
    }
};
