#include <bits/stdc++.h>
#include <system_error>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  string minWindow(string s, string t) {
    int n = s.size();
    int m = t.size();

    if (n < m)
      return "";
    unordered_map<char, int> mp;
    for (auto ch : t) {
      mp[ch]++;
    }

    // bsic setup
    string toWork = "";
    vector<int> indices;
    for (int i = 0; i < n; i++) {
      char ch = s[i];
      if (mp[ch]) {
        indices.push_back(i);
        toWork += ch;
      }
    }
    int new_n = toWork.size();

    if (new_n < m)
      return "";

    int sz = 0;
    int req_len = m;

    int st = 0;
    int end = 0;

    for (int i = 0; i < (sz - m); i++) {
    }
  }
};
int main() { return 0; }
