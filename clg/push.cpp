#include <bits/stdc++.h>
using namespace std;

class Array_Ops{
    public:
    void push(int arr[], int n, int idx){
        if(idx>=10){
            cout << "no" << "\n";
        }
        else{
            arr[idx] = n;
        }
    }
    void pop(int arr[], int idx){
        if(idx>=10){
            cout << "no" << "\n";
        }
        else{
            arr[idx] = 0;
        }
    }
    void display(int arr[]){
        for(int i=0;i<10;i++){
            cout << arr[i] << " ";
        }
    }
};


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Array_Ops obj;
    obj.push(arr, 11, 10);
    obj.display(arr);
    

    
    

    return 0;
}