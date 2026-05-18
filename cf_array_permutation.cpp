#include <iostream>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[3*n];
        int count = 1;
        int place = 3*n;

        for (int i = 3*n-1; i >= 0; i--)
        {
            if(i%3 == 0){
                arr[i] = count;
                count++;
            }
            else{
                arr[i] = place;
                place--;
            }
        }

        for (int i = 0; i < 3*n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}