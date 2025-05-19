int lengthOfLastWord(char* s) {
    int length = strlen(s);
    
    int i = length - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    int last_word_finish_index = i;
    for (; i >= 0 && s[i] != ' '; i--) {
    }

    int last_word_start_index = i + 1;

    return last_word_finish_index - last_word_start_index + 1;
}
