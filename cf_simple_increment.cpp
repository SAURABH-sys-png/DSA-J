#include <iostream>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n == 67){
            cout << 67 << endl;
        }
        else{
            cout << n + 1 << endl;
        }
    }
    return 0;
}