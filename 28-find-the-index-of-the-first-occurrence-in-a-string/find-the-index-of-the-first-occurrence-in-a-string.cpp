class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i = 0; i <= n - m; i++) {
            int count = 0;
            while(count < m && haystack[i + count] == needle[count]) {
                count++;
            }
            if(count == m) 
            return i;
        }
        return -1;
    }
};