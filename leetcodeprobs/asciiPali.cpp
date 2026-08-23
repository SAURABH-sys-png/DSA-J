class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
    bool isPalindromic(string s) {
        string binary = "";

        for (auto ch : s) {
            int num = ch;
            binary += bitset<8>(num).to_string();
        }
        return isPalindrome(binary);
    }
};

