#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
using namespace std;


class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n  = words.size();
        string ans = "";
        unordered_map<char, int> mp;
        unordered_map<char, int> mp_rev;

        for(int i =0;i<26;i++){
            mp[char('a'+i)] = weights[i];
        }
        for(int i =0;i<26;i++){
            mp_rev[weights[i]] = char('a'+i);
        }

        vector<int> pre_ans;
        for(string &s: words){
            int sum = 0;
            for(char c: s){
                sum += mp[c];
            }
            pre_ans.push_back(sum);
        }
        for(int ith : pre_ans){
            ans += mp_rev[ith];
        }
        return ans;
    }
};
int main() {
    fastio
    Solution sol;
    string s;
    vector<string> words;
    vector<int> weights;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        words.push_back(s);
    }
    for(int i=0;i<26;i++){
        int w;
        cin >> w;
        weights.push_back(w);
    }
    string ans = sol.mapWordWeights(words, weights);
    cout << ans << endl;

    return 0;
}