#include <bits/stdc++.h>

using namespace std;

class mc_learning_02
{

public:
    static const int myname = 9;
};
// static const is better way of define usage if the scope is only within the class 
// --- CostEstimate.h (Header File) ---
class CostEstimate {
private:
    static const double FudgeFactor; // Declaration: "This exists, but don't set the value yet."
};

// --- CostEstimate.cpp (Implementation File) ---
const double CostEstimate::FudgeFactor = 1.35; // Definition: "Here is the actual value."

// The enum hack
class GamePlayer {
private:
    enum { NumTurns = 5 }; // The Enum Hack: sets NumTurns to 5 at compile-time
    
    int scores[NumTurns];  // Perfectly legal! The compiler knows it's exactly 5.
};


void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}