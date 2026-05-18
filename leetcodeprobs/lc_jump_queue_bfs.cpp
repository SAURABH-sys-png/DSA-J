struct node{
    int data;
    int index;
    node *next;
}
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