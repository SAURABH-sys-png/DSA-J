#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
void generatePermutations(int total_length, map<char, int> &seen, string &current_permutation)
{

    if (current_permutation.length() == total_length)
    {
        cout << current_permutation << "\n";
        return;
    }

    for (auto &[ch, freq] : seen)
    {

        if (freq > 0)
        {

            current_permutation.push_back(ch);
            seen[ch]--;

            generatePermutations(total_length, seen, current_permutation);

            seen[ch]++;
            current_permutation.pop_back();
        }
    }
}
void solve(string str)
{
    int n = str.size();
    map<char, int> seen;
    for (char ch : str)
    {
        seen[ch]++;
    }
    // i have the frequency of every element or say alphabet

    long long perm = factorial(n);
    for (auto &[ch, freq] : seen)
    {
        long long fact_freq = factorial(freq);
        perm = perm / fact_freq;
    }
    // now i have the permutations the actual number of how many possible values

    cout << perm << "\n";
    string current_posi = "";

    generatePermutations(n, seen, current_posi);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string t = "";
    cin >> t;
    solve(t);

    return 0;
}