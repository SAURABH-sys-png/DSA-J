#include <iostream>

using namespace std; 

int main() {
    int arr[10] = {1,23,33,45,52,69,70,88,91,100};
    int n = 10;
    int beg = 0;
    int end = n-1;
    int mid;
    int num = 1;

    int count = 0;

    while (beg<=end)
    {
        count++;
        mid = beg +(end-beg)*((num-arr[beg])/(arr[end]-arr[beg]));
        if (arr[mid] == num)
        {
            cout << mid << endl;
            break;
        }
        else if (arr[mid] > num)
        {
            end = mid-1;
        }
        else{
            beg = mid+1;
        }

        
        
    }

    cout <<count << endl;
    
    return 0;
}