vector<int> Solution::flip(string A) {
    
    
    /* Solution is based on the approach of finding : Max Sum Contiguous Subarray */
    int currMax = INT_MIN;
    int currL = -1;
    int currR = -1;
    
    int nextMax = 0;
    int nextL = 0;
    int nextR = 0;
    
    vector<int> returnV;
    
    /* Each 1 is considered as contributing -1 to sum and each 0 contributing +1 */
    for(int i = 0; i < A.length(); i++) {
        
        if(A[i] == '1') {
            nextMax = nextMax - 1;
            nextR = i;
        }
        else {
            nextMax = nextMax + 1;
            nextR = i;
        }
        
        if(currMax < nextMax && nextMax > 0) {
            currMax = nextMax;
            currL = nextL;
            currR = nextR;
        }
        
        if(nextMax < 0) {
            nextMax = 0;
            nextL = i + 1;
            nextR = i + 1;
        }
    }
    
    if(currMax > 0) {
        returnV.push_back(currL + 1);
        returnV.push_back(currR + 1);
    }
    
    return returnV;
}
