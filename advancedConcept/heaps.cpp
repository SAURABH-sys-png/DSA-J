#include <bits/stdc++.h>
#define MAX 1000
using namespace std;


//deletion of heaps

class deletion_Heaps
{

    void heapify(int arr[], int n, int i)
    {

        int parent = (i - 1) / 2;
        if (parent >= 0)
        {

            if (arr[i] > arr[parent])
            {
                swap(arr[i], arr[parent]);

                heapify(arr, n, parent);
            }
        }
    }

    void insertNode(int arr[], int &n, int Key)
    {

        n = n + 1;

        arr[n - 1] = Key;

        heapify(arr, n, n - 1);
    }

    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";

        cout << "\n";
    }
};
// insertion of heaps
class insertion_Heaps
{
public:
    void heapify(int arr[], int n, int i)
    {

        int parent = (i - 1) / 2;
        if (parent >= 0)
        {
            if (arr[i] > arr[parent])
            {
                swap(arr[i], arr[parent]);

                heapify(arr, n, parent);
            }
        }
    }

    void insertNode(int arr[], int &n, int Key)
    {

        n = n + 1;

        arr[n - 1] = Key;

        heapify(arr, n, n - 1);
    }

    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";

        cout << "\n";
    }
};