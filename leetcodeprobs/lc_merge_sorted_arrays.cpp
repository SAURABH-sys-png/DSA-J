#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < m+n; i++)
        {
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};

int main() {
    vector<int> nums1(32);
    vector<int> nums2(20);
    for (int i = 0; i < 12; i++)
    {
        nums1[i] = i+2;
    }
    for (int k = 0; k < 20; k++)
    {
        nums2[k] = k;
    }
    Solution sol;

    sol.merge(nums1,12,nums2,20);

    for (int l = 0; l < 32; l++)
    {
        cout << nums1[l] << endl;
    }
    
    

    
    return 0;
}