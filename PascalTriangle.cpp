vector<vector<int> > Solution::solve(int A) {

    vector<vector<int>> pascalTriangle;
    for(int i = 0 ; i < A; i++) {
        int rowCount = i + 1;
        vector<int> pascalRow(rowCount, 0);
        for(int j = i - 1 ; j >= 0 ; j--) {
            int k = 0;
            while((i - k) >= 0  && (j - k) >= 0) {
                pascalRow[j] = pascalRow[j] + pascalTriangle[i - 1 - k][j - k];
                k++;
            }
        }
        pascalRow[i] = 1;
        pascalTriangle.push_back(pascalRow);
    }
    return pascalTriangle;
}
