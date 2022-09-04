/*
Here is the link of leetcode question :)
https://leetcode.com/problems/pascals-triangle/
*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows); 
        
        for(int i=0;i<numRows;i++){
            //resize the column size as it is equal to the row number
            
         r[i].resize(i+1);
            //first and last column in every row has 1
            
         r[i][0]=r[i][i]=1;
            
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
        
    }
};
