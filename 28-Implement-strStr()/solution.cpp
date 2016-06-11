class Solution {
public:
    int strStr(char *haystack, char *needle) {
        if(!*needle) return 0;
        if(!*haystack) return -1;
        int m = strlen(haystack), n = strlen(needle);
        
        for(int i=0; i<=m-n; i++) {
            for(int j=0; j<=n; j++) {
                char *p1 = haystack+i+j;
                char *p2 = needle+j;
                if(!*p2) return i;
                if(*p1 != *p2) break;
            }
        }
        return -1;
    }
};