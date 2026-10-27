class Solution {
public:
bool validrow(vector<vector<int>>& matrix, int target,int midrow){
    int n=matrix[0].size();
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target==matrix[midrow][mid]){
             return true;
             }
        else if( target>matrix[midrow][mid]){
            st=mid+1;
        } else {
            end=mid-1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//Important Note: Because C++ 2D vectors can be "jagged" (meaning different rows can have different lengths), matrix[0].size() only tells you the column count for the first row. Always ensure your matrix is not empty (!matrix.empty()) before accessing matrix[0] to avoid undefined behavior.        
        int m=matrix.size();
        int n=matrix[0].size();
        int str=0;
        int endr=m-1;
        while(str<=endr){
        int mid=str+(endr-str)/2;
         if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){//means target exists in the midrow so  again apply binary search in midrow
            return validrow(matrix,target,mid);
             
            }else if(target>matrix[mid][n-1]){
                 str=mid+1;
            }
            if(target<matrix[mid][0]){
                endr=mid-1;
            }
        }
        return false;
    }
};