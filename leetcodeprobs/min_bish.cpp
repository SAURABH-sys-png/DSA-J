#include <bits/stdc++.h>
using namespace std;

struct Posi
{
  int i;
  int j;
};
class Solution
{
public:
  bool sameD(Posi st, Posi end)
  {
    return (abs(st.i - end.i) == abs(st.j - end.j));
  }
  bool notPosi(Posi st, Posi end)
  {

    return ((st.i + st.j) % 2 != (end.i + end.j) % 2);
  }
  int minBishopMoves(vector<int> &source, vector<int> &target)
  {

    Posi st;
    st.i = source[0];
    st.j = source[1];
    Posi end;
    end.i = target[0];
    end.j = target[1];

    if(sameD(st,end)){
      return 1;
    }
    else if(notPosi(st,end)){
      return -1;
    }
    else{
      return 2;
    }
  }
};

int main()
{
  return 0;
}
