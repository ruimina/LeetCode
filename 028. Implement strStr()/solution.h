class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, len1 = haystack.length(), len2 = needle.length();
        if(len1<len2) return -1;
        for(i = 0;i<len1-len2+1;i++){
            int j;
            for(j = 0;j<len2;j++){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j==len2) return i;
        }
        return -1;
    }
};