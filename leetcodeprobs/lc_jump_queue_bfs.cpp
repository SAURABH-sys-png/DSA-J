#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    int index;
    node *next;
};
class Solution {
public:
    void insert(node *&head,node *&end,int val,int ind){
        if(head == nullptr){
            node *temp = new node();
            temp->data = val;
            temp->index = ind;
            head = temp;
            end = temp;
        }
        else{
            node *temp = new node();
            temp->data = val;
            temp->index = ind;
            

        }
    }
    bool canReach(vector<int>& arr, int start) {
        // queuee implement hoga 
        int n = arr.size();
        node *head = new node();


        while(true){

        }
    }
};

void solve() {
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}