vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> diagonalV;
    int size = 2 * A.size() - 1;
    int n = A.size();
    
    /* As the matrix is square, resultant array will have increasing size until it reaches N and then decreases symmitrically; hence 'size' */
    for(int i = 0 ; i < size ; i++) {
        vector<int> eachDiagonal;
        int colIndex, rowIndex, count = 0;
        
        /* Depending upon the current i value we will decide the size of the array and corresponding starting indexes from where start reading the matrix */
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
        
        /* Now once all the indexes are set, we just need to start reading elements diagonally until we reach end of that diagonal(determined by this condition) */
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
