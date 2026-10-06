class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() < 2) return true;
        int i = 0;
        int j = static_cast<int>(s.length() - 1);
        char b = s[i];
        char e = s[j];
        
        while(i <= j){
            while(!isalpha(static_cast<unsigned char>(b))
            && !isdigit(b)){
                b = s[++i];
            }
            while(!isalpha(static_cast<unsigned char>(e))
            && !isdigit(e)){
                e = s[--j];
            }
            if (i > j){
                return true;
            }
            if(tolower(b) != tolower(e)) return false;
            b = s[++i];
            e = s[--j];

        }
        return true;
    }
};
