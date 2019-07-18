vector<string> Solution::fizzBuzz(int A) {
    
    string fizzBuzz = "FizzBuzz";
    string fizz = "Fizz";
    string buzz = "Buzz";
    
    vector<string> fizzVec(A);
    
    for(int i = 0 ; i < A; i++) {
        int elem = i + 1;
        if(elem % 15 == 0) fizzVec[i] = fizzBuzz;
        else if(elem % 5 == 0) fizzVec[i] = buzz;
        else if(elem % 3 == 0) fizzVec[i] = fizz;
        else fizzVec[i] = to_string(i + 1);
    }
    return fizzVec;
}
