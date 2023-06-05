class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m=matrix.size();
         int n=matrix[0].size();
         vector<int>h(m,0);
         vector<int>v(n,0);
         for(int i=0;i<m;i++){
             int cnt=0;
             for(auto &it:matrix[i]){
                 if(it==0) cnt++;
             }
             h[i]=cnt;
         }
         for(int j=0;j<n;j++){
             int cnt=0;
             for(int i=0;i<m;i++){
                 if(matrix[i][j]==0) cnt++;
             }
             v[j]=cnt;
         }
         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    h[i]=n;
                    v[j]=m;
                }
             }
         }
        // matrix.clear();
         for(int i=0;i<h.size();i++){
             if(h[i]==n){
                 for(int j=0;j<n;j++){
                     matrix[i][j]=0;
                 }
             }
         }
           for(int i=0;i<v.size();i++){
             if(v[i]==m){
                 for(int j=0;j<m;j++){
                     matrix[j][i]=0;
                 }
             }
         }



    }
};
