class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> anagram;

        for (char x : s) {
            if ((tolower(x) >= 97 and tolower(x) <= 122) or
                ((tolower(x) >= 48 and tolower(x) <= 57))) {
                anagram.push_back((char)tolower(x));
            }
        }

        int size = anagram.size();
        for (int i = 0; i < size; ++i) {
            if (!(anagram[i] == anagram[size - i - 1])) {
                return false;
            }
        }
        return true;
    }
};