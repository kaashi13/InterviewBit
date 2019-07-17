vector<int> Solution::getRow(int A) {
    
    A = A + 1;
    vector<int> pascalTriangleRow(A);
    
    for(int i = 0 ; i < A; i++) {
        pascalTriangleRow[i] = 1;
        int index1 = i - 1;
        int index2 = i - 2;
        while(index1 >= 0 && index2 >= 0) {
            pascalTriangleRow[index1] = pascalTriangleRow[index1] + pascalTriangleRow[index2];
            index1--;
            index2--;
        }
    }
    
    return pascalTriangleRow;
}
