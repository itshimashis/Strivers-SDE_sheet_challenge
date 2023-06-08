class Solution {
public:
    //external binary search for 1d arrays
    bool binary(vector<int>arr,int k){
        int low=0,high=arr.size()-1;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(arr[mid]==k) return true;
            else if(arr[mid]>k) high=mid-1;
            else low=mid+1;
        }
         return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,high=matrix.size()-1;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target && target<=matrix[mid][matrix[0].size()-1]) return binary(matrix[mid],target);
            else if(matrix[mid][0]>target) high=mid-1;
            else low=mid+1;
            
        }
        return false;
        
        
    }
};
