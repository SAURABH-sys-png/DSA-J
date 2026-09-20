#include <bits/stdc++.h>
using  namespace std;

// approach one

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int &value : arr){
        cin >> value;
    }
    int spc;
    cin >> spc;
    spc--;

    // clubbing into 0101
    vector<int> zerone;
    int newspc = 0;
    for(int i = 0; i < n; ++i){
        if(i == 0 || arr[i] != arr[i - 1]){
            zerone.push_back(arr[i]);
        }
        if(i == spc){
            newspc = static_cast<int>(zerone.size()) - 1;
        }
    }

    int cntZero = count(zerone.begin(), zerone.end(), 0);
    int cntOne = count(zerone.begin(), zerone.end(), 1);
    (void)cntZero;
    (void)cntOne;

    const int runCount = static_cast<int>(zerone.size());
    const int specialValue = arr[spc];
    int res = 0;

    if(runCount == 1){
        cout << 0 << '\n';
        return;
    }

    if(newspc < runCount / 2){
        res = newspc;
        int pointer = min(runCount - 1, 2 * newspc);
        res += runCount - pointer - 1;
        if(zerone.back() != specialValue){
            ++res;
        }
    }
    else{
        res = runCount - newspc - 1;
        int pointer = max(0, 2 * newspc - runCount + 1);
        res += pointer;
        if(zerone.front() != specialValue){
            ++res;
        }
    }

    cout << res << '\n';
}
// void solve(){
//     int n, k;
//     cin >> n >> k;

//     vector<int> arr(n);
//     for(int &value : arr){
//         cin >> value;
//     }

//     int spc;
//     cin >> spc;
//     --spc;

//     int leftFlips = 0;
//     for(int i = 1; i <= spc; ++i){
//         leftFlips += arr[i] != arr[i - 1];
//     }

//     int rightFlips = 0;
//     for(int i = spc + 1; i < n; ++i){
//         rightFlips += arr[i] != arr[i - 1];
//     }

//     const int maximumFlips = max(leftFlips, rightFlips);
//     cout << maximumFlips + (maximumFlips % 2) << '\n';
// }

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}