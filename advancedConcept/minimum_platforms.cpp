#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minPlatform(vector<int>& arr, vector<int>& dep) {
    int n = arr.size();
    int res = 0;
  
    for (int i = 0; i < n; i++) {

        int cnt = 1;
        for (int j = i+1; j < n; j++) {

            // check for overlap
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || 
                (arr[j] >= arr[i] && arr[j] <= dep[i]))
                    cnt++;
                
        }
        res = max(cnt, res);
    }
    return res;
}

int main() {
    vector<int> arr = {1000, 935, 1100};
    vector<int> dep = {1200, 1240, 1130};
    cout << minPlatform(arr, dep) << endl;
    return 0;
}