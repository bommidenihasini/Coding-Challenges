class Solution {
public:
    int strStr(string haystack, string needle) {
        long long m=haystack.length();
        long long n=needle.length();
        if(n>m)
           return -1;
        for(int i=0;i<m;i++){
            int j;
            for(j=0;j<n;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==n)
              return i;
        }
        return -1;
    }
};