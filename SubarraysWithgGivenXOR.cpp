int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    m[0]++;
    int xr=0;
    int cnt=0;
    for(int i=0;i<A.size();i++){
        xr=xr^A[i];
        int x=xr^B;
        cnt+=m[x];
        m[xr]++;
    }
    return cnt;
}
