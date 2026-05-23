#include <bits/stdc++.h>
#define ll long long // This ll is given to preprocessor and preprocessor assighns every or replaces every instance of ll with long long 
const double Sr = 1.645; // instead use this form it does not do that rather it assighns the values to the compilor or gives the values to compilor
// the things is much more space savy With #define ASPECT_RATIO 1.653

//Every single time you use ASPECT_RATIO in your code, the preprocessor pastes the literal number 1.653. If you use it 20 times across different equations, the compiler has to hardcode the binary representation of 1.653 into 20 different instructions inside the machine code. It duplicates the data over and over.
//With const double AspectRatio = 1.653;

//The compiler allocates one single memory location to hold the value 1.653. Every time your code needs to use it, the compiler just writes a fast instruction pointing back to that one specific memory address.

//nstead of duplicating the heavy floating-point number 20 times, you have 1 copy of the number and 20 lightweight references to it.

using namespace std;



void solve() {
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}