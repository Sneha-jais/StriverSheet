/* 
Here is the leet code link for this question :)
https://leetcode.com/problems/set-matrix-zeroes/
*/

class Solution {
public:
   
    void setZeroes(vector<vector<int>>& matrix) {
        
//<-------Approach 1: Take two dummy array------->
      
      
//      int row=matrix.size(),col=matrix[0].size();
//         vector<int> tempr(row,-1),tempc(col,-1);
        
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(matrix[i][j]==0){
//                     tempr[i]=0;
//                     tempc[j]=0;
//                 }
//             }
//         }
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(tempr[i]==0 || tempc[j]==0)
//                     matrix[i][j]=0;
//             }
//         }
        
//<--------Approach 2:Supposing 0th row and 0th column as dummy array--------->
        
        int row=matrix.size(),col=matrix[0].size();
        int col0=1;
        
            for(int i=0;i<row;i++){
            if(matrix[i][0]==0)
                col0=0;
                 for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                     matrix[0][j]=0;
                    }             
                 }                      
        }
        
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>0;j--){
                if(matrix[0][j]==0 || matrix[i][0]==0)
                    matrix[i][j]=0;
              
            }
            if(col0==0)
                matrix[i][0]=0;
        }
    }
};
