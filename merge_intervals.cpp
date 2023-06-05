class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& is) {
        vector<vector<int>>ans;
        sort(is.begin(),is.end());
        for(int i=0;i<is.size();i++){
            if(ans.size()==0) {
                ans.push_back(is[i]);
                continue;
            }
            if(ans.back()[1]>=is[i][0]){
                ans.back()[1]=max(ans.back()[1],is[i][1]);
                continue;
            }
            ans.push_back(is[i]);

        }
        return ans;
    }
};
