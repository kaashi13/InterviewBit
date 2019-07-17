vector<vector<int> > Solution::generateMatrix(int A) {
    
    int iteration = 0;
    int choice;
    
    int rowTop = 0;
    int rowBottom = A;
    int columnLeft = 0;
    int columnRight = A;
    
    int countN = A * A;
    int currentCount = 0;
    
    vector<int> singleV(A, 0);
    vector<vector<int>> spiralVec(A, singleV);

    while(countN != 0) {
        
        choice = iteration % 4;
        
        if(choice == 0) {
            for(int i = columnLeft ; i < columnRight ; i++) {
                currentCount++;
                countN--;
                spiralVec[rowTop][i] = currentCount;
            }
            rowTop++;
        }
        else if(choice == 1) {
            for(int i = rowTop ; i < rowBottom ; i++) {
                currentCount++;
                countN--;
                spiralVec[i][columnRight - 1] = currentCount;
            }
            columnRight--;
        }
        else if(choice == 2) {
            for(int i = columnRight - 1 ; i >= columnLeft ; i--) {
                currentCount++;
                countN--;
                spiralVec[rowBottom - 1][i] = currentCount;
            }
            rowBottom--;
        }
        else if(choice == 3) {
            for(int i = rowBottom - 1 ; i >= rowTop ; i--) {
                currentCount++;
                countN--;
                spiralVec[i][columnLeft] = currentCount;
            }
            columnLeft++;
        }
        iteration++;
    }
    
    return spiralVec;
}
