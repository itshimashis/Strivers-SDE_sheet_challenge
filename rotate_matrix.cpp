class Solution {
public:
    void swapv(int* x,int* y){
int temp;
    temp=*x;
        *x=*y;
        *y=temp;
    }
    void rotate(vector<vector<int>>& matrix) {
       int size=matrix.size();
        for(int i=0;i<size;i++){
            reverse(matrix[i].begin(),matrix[i].end());
            
         
        }
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                swapv(&matrix[i][j],&matrix[size-1-j][size-1-i]);
              
            
            }
        }
 
        
        
        
        
        
    }
};
