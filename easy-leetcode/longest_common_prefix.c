char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char* prefix = malloc(200);
    int len = 0;

    for (int j = 0; ; j++) {
        char c = strs[0][j];
        if (c == '\0') break;

        for (int i = 1; i < strsSize; i++) {
            if (strs[i][j] != c || strs[i][j] == '\0') {
                prefix[len] = '\0';
                return prefix;
            }
        }
        prefix[len++] = c;
    }

    prefix[len] = '\0';
    return prefix;
}