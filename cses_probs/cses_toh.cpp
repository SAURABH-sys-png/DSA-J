#include <bits/stdc++.h>
using namespace std;


// by reference (no O(n) copy) and safe on an empty peg
bool isInsertable(int num,const stack<int>& s){
  return s.empty() || num<s.top();
}
void solve(){
  int n;
  cin >>n;
  stack<int> peg[3];

  for(int d=n;d>0;d--) peg[0].push(d);

  vector<pair<int,int>> moves;
  // smallest disk cycles 1->2->3 for even n, 1->3->2 for odd n
  int dir = (n&1) ? 2 : 1;
  int pos = 0; // peg currently holding disk 1
  long long total = (1LL<<n)-1;

  while ((long long)moves.size() < total) {
    // move the smallest disk
    int to = (pos+dir)%3;
    peg[pos].pop();
    peg[to].push(1);
    moves.push_back({pos+1,to+1});
    pos = to;
    if((long long)moves.size() == total) break;

    // the only legal move between the other two pegs
    int a = (pos+1)%3, b = (pos+2)%3;
    if(!peg[a].empty() && isInsertable(peg[a].top(),peg[b])){
      peg[b].push(peg[a].top());peg[a].pop();
      moves.push_back({a+1,b+1});
    }
    else{
      peg[a].push(peg[b].top());peg[b].pop();
      moves.push_back({b+1,a+1});
    }
  }

  std::cout << moves.size() << '\n';
  for(auto& pr : moves){
    cout << pr.first << ' ' << pr.second << '\n';
  }
  return;
}

int main(){
  solve();
  return 0;
}
