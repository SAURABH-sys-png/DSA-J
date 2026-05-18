#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int cols = encodedText.size()/rows;

        int gap = cols;
        string result;

        for(int i = 0;i < cols; i++){
            int j = 0;
            while(true){
                if (i + j >= encodedText.size()) {
                    break;
                }
                result += encodedText[i + j];
                j = j + gap + 1;

            }
        }

        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};


int main(){
	string u = "iveo    eed   l te   olc";
	Solution s;
	string t = s.decodeCiphertext(u,4);

	cout << t << endl;
	
	return 0;
}
