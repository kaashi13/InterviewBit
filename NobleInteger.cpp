int Solution::solve(vector<int> &A) {
    
    sort(A.begin(), A.end());
    int size = A.size();
    
    for(int i = 0; i < size; i++) {
        int numGreaterElems = size - i - 1;
        if(numGreaterElems == A[i]) {
            if((i + 1) < size && A[i + 1] == A[i]) continue;
            else return 1;
        }
    }
    return -1;
}
