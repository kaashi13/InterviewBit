int Solution::coverPoints(vector<int> &A, vector<int> &B) {

    /* We can find out which of the co-ordinates is more distant and simply return that value at each step */
    int stepsG = 0;
    for(int i = 0; i < A.size() - 1 ; i++) {
        int stepsX = abs(A[i + 1] - A[i]);
        int stepsY = abs(B[i + 1] - B[i]);
        int stepsL = (stepsX >= stepsY) ? stepsX : stepsY;
        stepsG = stepsG + stepsL;
    }
    return stepsG;
}
