#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        // trailing slashes should be removed
        // ( //  should be removed)
        //
        // ( /../ )

        // tmp = /../
        // wrd = ".."
        string tmp = "/";

        for (int i = 1; i < path.size(); i++)
        {
            if (path[i - 1] == '/' && path[i] == '/')
            {
                continue;
            }
            tmp += path[i];
        }
        //
        string curr = ".";
        string back = "..";

        vector<string> stk;
        string wrd = "";
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] == '/')
            {
                if (wrd.size() > 0)
                {
                    if (wrd == curr)
                    {
                        wrd = "";
                        continue;
                    }
                    else if (wrd == back)
                    {
                        if(stk.empty()) continue;
                        stk.pop_back();
                        wrd = "";
                    }
                    stk.push_back(wrd);
                    wrd = "";
                }
            }
            else
            {
                wrd += tmp[i];
            }
        }

        if (tmp[tmp.size() - 1] != '/')
        {
            stk.push_back(wrd);
        }

        string res = "/";

        for (int i = 0; i < stk.size(); i++)
        {
            res += stk[i];
            res += "/";
        }
        if(res.size()==1) {
            return res;
        }
        


        string ans = "/";

        for (int i = 1; i < res.size(); i++)
        {
            if (res[i - 1] == '/' && res[i] == '/')
            {
                continue;
            }
            ans += res[i];
        }

        ans.pop_back();
        return ans;
    }
};

int main()
{
    return 0;
}