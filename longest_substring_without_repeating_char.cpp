class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int left=0,right=0;
        int ans=0;
        while(right<s.size()){
            if(m.find(s[right])!=m.end()){
               left=max(m[s[right]]+1,left);
            }
            m[s[right]]=right;
            ans=max(right-left+1,ans);
            right++;
        }
        return ans;
    }
};
