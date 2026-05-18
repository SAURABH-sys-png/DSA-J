#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
	for(int i = 0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
	
        }
	cout << strs[0] << endl;
	vector<vector<string>> result;
	return result;
    }
};

int main(){
	Solution sln;
	vector<string>strs;
	sln.groupAnagrams(strs);
	return 0;
}
