
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        for(int i=0;i<A.size()-1;i++){
            A[i+1]+=A[i];
        }
        map<int,int>m;
        int ans=0;
        for(int i=0;i<A.size();i++){
            if(A[i]==0) ans=max(ans,i+1);
            if(m.find(A[i])==m.end()) m[A[i]]=i;
            else{
                ans=max(i-m[A[i]],ans);
            }
        }
        return ans;
    }
};
