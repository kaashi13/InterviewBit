string Solution::countAndSay(int A) {
    int counter = 1;
    string initialS = "1";
    string cSay = "1";
    
    if(A == 1) return initialS;
    while(counter < A) {
        int count = 0;
        int indexCheck = 0;
        int cSaySize = cSay.length();
        string tempString(cSay);
        while(count < cSaySize) {
            if(count == 0) cSay.erase(cSay.begin(), cSay.end());
            char sequence = tempString[count];
            int startI = count;
            int endI = count;
            while(endI + 1 < cSaySize && sequence == tempString[endI + 1]) {
                endI++;
                count++;
            }
            int indexC = endI - startI + 1;
            cSay.insert(indexCheck * 2, to_string(indexC));
            cSay.insert(indexCheck * 2 + 1, 1, sequence);
            indexCheck++;
            count++;
        }
        counter++;
    }
    return cSay;
}
