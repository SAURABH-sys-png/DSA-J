#include <bits/stdc++.h>

using namespace std;

// memory efficient aproach

class Solution
{
public:
    int numberOfSpecialChars(const string& word)
    {
        unordered_map<char, pair<bool, bool>> mp;
        mp.reserve(26);

        // {validSmallBeforeUpper , upperSeen}
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            mp[ch] = {false, false};
        }

        for (const char ch : word)
        {
            // lowercase
            if (ch >= 'a' && ch <= 'z')
            {
                // false,false -> true,false
                if (mp[ch].first == false && mp[ch].second == false)
                {
                    mp[ch] = {true, false};
                }

                // true,true -> false,true
                else if (mp[ch].first == true && mp[ch].second == true)
                {
                    mp[ch].first = false;
                }
                
            }

            // uppercase
            else
            {
                char lower = tolower(ch);

                // true,false -> true,true
                if (mp[lower].first == true && mp[lower].second == false)
                {
                    mp[lower].second = true;
                }

                // false,false -> true,false
                else if (mp[lower].first == false && mp[lower].second == false)
                {
                    mp[lower] = {false, true};
                }
            }
        }

        int count = 0;

        for (const auto& it : mp)
        {
            // valid special character
            if (it.second.first == true && it.second.second == true)
            {
                count++;
            }
        }

        return count;
    }
};

class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        int n = word.size();
        set<char> seen_smallcase;
        set<char> seen_uppercase;
        vector<char> res;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = word[i];
            if (ch >= 'a' && ch <= 'z')
            {
                if (!(seen_uppercase.find(toupper(ch)) != seen_uppercase.end()))
                {
                    seen_smallcase.insert(ch);
                }
                else
                {
                    seen_smallcase.erase(ch);
                }
            }
            else
            {
                seen_uppercase.insert(ch);
            }
        }

        set<char> lower_set;
        for (char c : seen_uppercase)
        {
            // Convert to lowercase and insert into the new set
            lower_set.insert(static_cast<char>(tolower(static_cast<unsigned char>(c))));
        }

        vector<char> result;

        // Use std::back_inserter to add elements to the result vector
        set_intersection(seen_smallcase.begin(), seen_smallcase.end(),
                         lower_set.begin(), lower_set.end(),
                         back_inserter(result));

        return result.size();
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    return 0;
}