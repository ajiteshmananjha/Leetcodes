char * mergeAlternately(char * w1, char * w2){
    int sz1 = strlen(w1);
    int sz2 = strlen(w2);
    char *str = calloc(1, sz1 + sz2 + 1);
    int k = 0;
    for(int i = 0, j = 0; i < sz1 || j < sz2; i++, j++) {
        if(i < sz1)
            str[k++] = w1[i];
        if(j < sz2)
            str[k++] = w2[j];
    }
    return str;
}