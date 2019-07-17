vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> diagonalV;
    int size = 2 * A.size() - 1;
    int n = A.size();
    
    for(int i = 0 ; i < size ; i++) {
        vector<int> eachDiagonal;
        int colIndex, rowIndex, count = 0;
        if(i <= (n - 1)) {
            eachDiagonal.resize(i + 1);
            colIndex = i;
            rowIndex = 0;
        }
        else {
            eachDiagonal.resize(2 * n - i - 1);
            colIndex  = n - 1;
            rowIndex = i - n + 1;
        }
        
        while((colIndex >= 0 && colIndex < n) && (rowIndex >= 0 && rowIndex < n)) {
            eachDiagonal[count] = A[rowIndex][colIndex];
            rowIndex++;
            colIndex--;
            count++;
        }
        diagonalV.push_back(eachDiagonal);
    }
    return diagonalV;
}
