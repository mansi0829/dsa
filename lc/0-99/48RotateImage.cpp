// approach: clockwise shift approach
// 1 2 3    => 7 8 9    => swap         =>  3 2 1
// 4 5 6    => 4 5 6    => ij           =>  6 5 4
// 7 8 9    => 1 2 3    => with ji      =>  9 8 7
    

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // while(n==1) {
        //     for (int i=0; i<n; i++) 
        //     {
        //         for (int j=0; j<n; j++) 
        //         {
        //            if(i>j) 
        //            {
        //                 matrix[i][j] = matrix[i][j+2];
        //             } 
        //             else 
        //             {
        //                 matrix[i][j] = matrix[i+2][j];
        //             }
        //         }
        //     }
        //     n--;
        // }
        reverse(matrix.begin(), matrix.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        
    }
};