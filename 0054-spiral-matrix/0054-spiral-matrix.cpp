class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int colst=0;
        int colend=n-1;
        int rowst=0;
        int rowend=m-1;
        while(rowst<=rowend && colst<=colend){
            
            for(int j=colst;j<=colend;j++){
                ans.push_back(matrix[rowst][j]);
            }
            for(int i=rowst+1;i<=rowend;i++){
                ans.push_back(matrix[i][colend]);
            }
            
            for(int j = colend - 1; j >= colst; j--) {
                if(rowst==rowend){//for odd number of rows,when rowst==rowend that row will be printed twice hence to avoid it we wrote this
                    break;
                }
            ans.push_back(matrix[rowend][j]);
            }
            
             for(int i = rowend - 1; i >= rowst + 1; i--) {
                if(colst==colend){//for odd number of cols,when rowst==rowend that row will be printed twice hence to avoid it we wrote this
                    break;
                }
            ans.push_back(matrix[i][colst]);
            }
            
            rowst++;
            colst++;
            rowend--;
            colend--;
           
        }
        return ans;
    }
};