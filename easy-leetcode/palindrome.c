bool isPalindrome(int x) {
    long original = (long)x;
    long temp = original;
    
    if (x < 0){
        temp = -temp;
    }

    if (x == 0){
        return true;
    }

    int digit;
    long reverse = 0;
    while (temp != 0){
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (reverse == original){
        return true;
    }
    else {
        return false;
    }
}