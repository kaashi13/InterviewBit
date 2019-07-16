vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    vector<int> spiralVec;
    
    int choice = 0;
    bool done = false;
    
    /* Array(Vector) can be visualized with these boundries, We keep changing them as we keep traversing the Vector */
    int rowTop = 0;
    int colLeft = 0;
    int rowBottom = A.size();
    int colRight = A[0].size();
    /* Here rowTop contains the topmost row which haven't been traversed yet. Similarly colLeft, rowBottom, colRight contain respective values quite evident form their names */
    
    /* Total number of elements we need to Traverse */
    int count = A.size() * A[0].size();
    
    /* Until and unless this condition is satisfied, not all elements are traversed */
    while(done != true && count != 0) {
    
    /* Key idea is that we traverse the vector in repetition of same 4 operations done one after other 
       1. Read topmost row of the vector : left to right (choice = 0)
       2. Read rightmost column of the vector : top to bottom (choice = 1)
       3. Read lowermost row of the vector : right to left (choice = 2)
       4. Read leftmost column of the vector : bottom up (choice = 3)
    */
        if(choice % 4 == 0) {
            for(int j = colLeft ; j < colRight; j++) {
                count = count - 1;
                spiralVec.insert(spiralVec.end(), A[rowTop][j]);
            }
            rowTop = rowTop + 1;
        }
        else if(choice % 4 == 1) {
            for(int j = rowTop; j < rowBottom; j++) {
                count = count - 1;
                spiralVec.insert(spiralVec.end(), A[j][colRight - 1]);
            }
            colRight = colRight - 1;
        }
        else if(choice % 4 == 2) {
            for(int j = colRight - 1 ; j >= colLeft; j--) {
                count = count - 1;
                spiralVec.insert(spiralVec.end(), A[rowBottom - 1][j]);
            }
            rowBottom = rowBottom - 1;
        }
        else if(choice % 4 == 3) {
            for(int j = rowBottom - 1; j >= rowTop; j--) {
                count = count - 1;
                spiralVec.insert(spiralVec.end(), A[j][colLeft]);
            }
            colLeft = colLeft + 1;
        }
        
        /* Stop when all the elements are traversed */
        if(rowTop == rowBottom - 1 && colLeft == colRight - 1 && count == 0) done = true;
        choice = choice + 1;
    }
    
    return spiralVec;
}
