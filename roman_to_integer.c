int romanToInt(char* s) {
    char precedence[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int explain[7] = {1, 5, 10, 50, 100, 500, 1000};

    int sum = 0;
    int length = strlen(s);
    int i, j;
    int index1 = 0;
    int index2 = 0;
    if (length > 1){
        for (i = 0, j=i+1 ; i <= length-2 ; i++, j++){
            for (int k = 0; k < 7 ; k++){
                if (s[i] == precedence[k]){
                    index1 = k;
                    break;
                }
            }
            for (int m = 0; m < 7 ; m++){
                if (s[j] == precedence[m]){
                    index2 = m;
                    break;
                }
            }
            if (index1 < index2){
                sum += explain[index2] - explain[index1];
                i++;
                j++;
            }
            else{
                sum += explain[index1];
            }
        }
        if (i == length - 1) {
            for (int k = 0; k < 7; k++) {
                if (s[i] == precedence[k]) {
                    sum += explain[k];
                    break;
                }
            }
        }
    }
    else{
        for (int k = 0; k < 7 ; k++){
            if (s[0] == precedence[k]){
                sum = explain[k];
            }
        }
    }
    return sum;
}