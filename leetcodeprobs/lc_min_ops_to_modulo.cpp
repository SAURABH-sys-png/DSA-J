#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int n = nums.size();
        // also given a int k
        // 1.INcrease or decrease by one in (1) operaation
        // task is to make the array altering modulo

        // 2. x,y should be less than k
        // evn value sks rem should be same and odd ka bhi same

        unordered_map<int, int> even;
        unordered_map<int, int> odd;
        for (int i = 0; i < n; i++) {
            int rem = ((nums[i] % k) + k) % k; 
            
            if (i % 2 == 0) {
                even[rem]++;
            } else {
                odd[rem]++;
            }
        }
        auto get_x_y = [](unordered_map<int, int>& counts, int k) {
            pair<int, int> best = {-1, 0}; // if no val then -1 
            pair<int, int> best_2 = {-1, 0}; // sm here
            
            for (auto const& [rem, freq] : counts) {
                if (freq > best.second) {
                    best_2 = best;
                    best = {rem, freq};
                } else if (freq > best_2.second) {
                    best_2 = {rem, freq};
                }
            }
            
            if (best_2.first == -1 && best.first != -1) {
                best_2 = {(best.first + 1) % k, 0};
            }
            
            return make_pair(best, best_2);
        };
        auto even_top = get_x_y(even, k);
        auto odd_top = get_x_y(odd, k);
        auto cal = [&](int teven, int todd) {
            long long cost= 0;

            for (auto const& [rem, freq] : even) {
                if (rem != teven) {
                    int diff = abs(rem - teven);
                    int mini = min(diff, k - diff);
                    cost += (long long)freq * mini;
                }
            }

            for (auto const& [rem, freq] : odd) {
                if (rem != todd) {
                    int diff = abs(rem - todd);
                    int mini = min(diff, k - diff);
                    cost += (long long)freq * mini;
                }
            }

            return cost;
        };
        int x = even_top.first.first;
        int y = odd_top.first.first;

        if (x != y) {
            return cal(x, y);
        } 
        else {
            long long option1Cost = cal(x, odd_top.second.first);
            long long option2Cost = cal(even_top.second.first, y);
            
            return min(option1Cost, option2Cost);
        }
    }
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