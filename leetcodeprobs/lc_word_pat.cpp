#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> arr;
        string tmp = "";
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch == ' ') {

                arr.push_back(tmp);

                tmp = "";
            } else {
                tmp += ch;
            }
        }
        arr.push_back(tmp);

        if (arr.size() != pattern.size())
            return false;
        unordered_map<char, string> mp;
        int t = 0;
        for (auto ch : pattern) {
            if (t >= arr.size())
                return false;
            if (mp.find(ch) != mp.end()) {
                if (arr[t] != mp[ch]) {
                    return false;
                }
            }
            mp[ch] = arr[t];
            t++;
        }

        t = 0;
        unordered_map<string, char> mp2;
        for (auto wrd : arr) {
            if (mp2.find(wrd) != mp2.end()) {
                if (pattern[t] != mp2[wrd]) {
                    return false;
                }
            }
            mp2[wrd] = pattern[t];
            t++;
        }

        return true;
    }
};

int main(){
  return 0;
}
