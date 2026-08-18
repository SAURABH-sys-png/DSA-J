#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string indi(const vector<string> &tmp, bool &isLast, int &sz, int &maxWidth)
    {
        string ans = "";
        if(!isLast){
            int n = tmp.size();
            int spaces = maxWidth-sz;
            int slots = n-1;
            if(slots==0){
                ans+=tmp[0];
                while (ans.size()<maxWidth)
                {
                    ans+=" ";
                }
                return ans;
            }
            int ev = spaces/slots;
            int rem = spaces%slots;
            for (int i = 0; i < n - 1; i++)
            {
                ans += tmp[i];
                ans.append(ev, ' ');
                if (i < rem)
                    ans += " ";
            }
            ans+=tmp[n-1];
        }
        else{
            for (int i = 0; i < tmp.size(); i++)
            {
                ans += tmp[i];
                
                if (i != tmp.size() - 1)
                    ans += " ";
            }
            while (ans.size() < maxWidth)
                ans += " ";
        }
        return ans;
    }
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> tmp;
        vector<string> res;
        bool isLast = false;

        int sz = 0;
        int cnt = 0;
        for(auto word:words){
            int wd_sz = word.size();
            if((sz+cnt+wd_sz) > maxWidth){
                res.push_back(indi(tmp,isLast,sz,maxWidth));
                tmp.clear();
                tmp.push_back(word);
                sz=wd_sz;
                cnt = 1;
            }
            else{
                cnt++;
                sz+=wd_sz;
                tmp.push_back(word);
            }
        }
        isLast = true;
        res.push_back(indi(tmp,isLast,sz,maxWidth));
        return res;
    }
};

// 