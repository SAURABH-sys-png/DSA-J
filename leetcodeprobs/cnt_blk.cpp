#include <bits/stdc++.h>
using namespace std;

struct Posi
{
  vector<int> indices;
};
class Solution
{
public:
  int countSpecialIntegers(vector<int> &nums)
  {
    unordered_map<int, Posi> mp;

    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]].indices.push_back(i);
    }
    int ans = 0;
    for (auto &[key, vec] : mp)
    {
      int sz = vec.indices.size();
      if (sz == 1)
      {
        ans++;
      }
      else
      {
        bool cont = false;
        for (int i = 1; i < sz; i++)
        {
          if (vec.indices[i] - vec.indices[i - 1] > 1)
          {
            cont = true;
            break;;
          }
        }
        if(!cont){
          ans++;
        }
      }
    }
    return ans;
  }
};

int main()
{

  return 0;
}
