#include <bits/stdc++.h>

using namespace std;

void solve(string str)
{
    int n = str.size();
    unordered_map<char, int> freq;

    for (char c : str)
    {
        freq[c]++;
    }// we have calculated the frequency of each type of character

    int oddCount = 0;
    for (auto &[ch, cnt] : freq)
    {
        if (cnt % 2 != 0)
            oddCount++;
    }// we count the number of odd numbers

    if (n % 2 == 0 && oddCount != 0)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    if (n % 2 == 1 && oddCount != 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }// condition for no solution

    // now making of the palidrome

    string res = "";// final string
    string mid = "";// this is the half string we make 

    for (auto &[ch, cnt] : freq)
    {
        if (n % 2 == 0)
        {
            // front half
            res += string(cnt / 2, ch);// this method makes the string or basically adds the ch value cnt/2 times in it 
        }
        else
        {
            // add half to front
            res += string(cnt / 2, ch);
            // if odd frequency, this is the middle character
            if (cnt % 2 == 1)
                mid = ch;
        }
    }

    // build full palindrome: front half + mid + reversed front half
    string rev = res;
    reverse(rev.begin(), rev.end());
    res = res + mid + rev;

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string str = "";
    cin >> str;
    solve(str);
    return 0;
}