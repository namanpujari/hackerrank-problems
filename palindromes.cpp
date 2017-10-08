vector<string> memPalindromes;

bool checkPalindrome(string s, size_t a, size_t b) {
    size_t start = a;
    size_t end = b;
    if(start == end){
        return true;
    } else {
        for(int i = 0; i <= (end-start)/2; i++) {
            if(s[start + i] != s[end - i]) {
                return false;
            } else {}
        }
    }
    
    return true;
}

int palindromeCount(string s) {
    unsigned int count = 0;
    bool palCheck;
    string palindrome;
    bool found;
    int len = s.length();   
    
    for(int i = 0; i < len; i++) {
        int point = i;
        for(int j = point; j < len; j++) {
            if(s[i] == s[j]) {
                palCheck = checkPalindrome(s, i, j);
                if(palCheck == true && count == 0) {
                    palindrome = s.substr(i, (j-i) + 1);
                    memPalindromes.push_back(palindrome);
                    count++;
                } else if(palCheck == true && count > 0) {
                    found = false;
                    palindrome = s.substr(i, (j-i) + 1);
                    for(size_t k = 0; k < memPalindromes.size(); k++) {
                        if(memPalindromes[k] == palindrome) {
                            found = true;
                            break;                           
                        } else {}
                    }
                    if(!found) {
                        memPalindromes.push_back(palindrome);
                        count++;
                    } else {}
                } else {}
            } else {}
        } 
    }
    
    return count;



    
}
