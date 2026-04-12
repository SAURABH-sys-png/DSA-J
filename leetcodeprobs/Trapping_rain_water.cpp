#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int maxnum = 0;

        for (int k = 0; k < height.size(); k++)
        {
            maxnum = max(maxnum,height[k]);
            
        }

        if(maxnum == 0 || maxnum == 1)return 0;

        
        int n = height.size();
        int result = 0;
        while (true)
        {
            int front = 0;
            bool flag1 = false;
            int last = n - 1;
            bool flag2 = false;

            while (front < last)
            {
                if (height[front] == 0)
                {
                    front++;
                }
                else if (height[front] > 0)
                {
                    flag1 = true;
                }

                if (height[last] == 0)
                {
                    last--;
                }
                else if (height[last] > 0)
                {
                    flag2 = true;
                }

                if (flag1 && flag2)
                {
                    break;
                }
            }
            int maxi = last-front;
            int count = 0;


            for (int j = front; j < last; ++j)
            {
                if (height[j]>0)
                {
                    count++;
                }
                
            }
            result = result + (maxi-count);
            

            // ending me sabse ek minus karna hai
            for (int i = 0; i < height.size(); i++)
            {
                if (height[i] > 0)
                {
                    height[i] = height[i] - 1;
                }
            }
            maxnum--;
            if (maxnum == 1)
            {
                break;
            }
            
             
        }

        return result;
    }
};

int main()
{

    

    return 0;
}