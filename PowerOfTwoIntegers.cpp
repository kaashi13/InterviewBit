int Solution::isPower(int A) {
    
    if(A == 1) return 1;
    
    int sqrtA = sqrt(A);
    
    /* No need to check for all possible combinations of base and exponents, we can simply narrow down our search to selected pairs only.
       If x is the base you are using then its power (log(A) / log(x)) could be the result. This narrows it down to only one choice per base.
       So the time complexity of this program is O(N ^ 0.5) which is decent.
    */
    for(int i = 2 ; i <= sqrtA; i++) {
        int j = (log(A) / log(i));
        if(pow(i, j) == A) return 1;
    }
    
    return 0;
}
