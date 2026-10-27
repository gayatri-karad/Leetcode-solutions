class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
//we will take the element at upper right corner as mid..we can also take bottom left corner element as mid just a few things will change then.
        int r=0;
        int c=n-1;
        while(r<m && c>=0){
            if(target==mat[r][c]){
                return true;
            } else if(target>mat[r][c]){
                r++;
            } else {
                c--;
            }
        }
        return false;
    }
};