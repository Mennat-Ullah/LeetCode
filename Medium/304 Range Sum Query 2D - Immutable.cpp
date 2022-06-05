class NumMatrix {
private:
    vector<vector<int>> DP;
public:
    // Constructor for generate DP for submission matrix
    NumMatrix(vector<vector<int>>& matrix) {
        int sizeRow = matrix.size() , sizeCol = matrix[0].size();
        DP = vector<vector<int>> (sizeRow+1 , vector<int> (sizeCol+1) );
        for( int r=0 ; r<sizeRow ; ++r  )
        {
            for( int c=0 ; c<sizeCol ; ++c)
            {
                DP[r+1][c+1] = DP[r][c+1] + DP[r+1][c] - DP[r][c] + matrix[r][c];
            }
        }
        
    }
    // Just return the sum.
    int sumRegion(int row1, int col1, int row2, int col2) {
        return DP[row2+1][col2+1] - DP[row2+1][col1] - DP[row1][col2+1] + DP[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */