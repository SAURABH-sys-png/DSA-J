#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isPrime(int n) { for (int i = 2; i * i <= n; i++) if (n % i == 0) return false; return n > 1; }
    int reverseof(int n){
        int rev = 0;

        while (n > 0)
        {
            int rem = n%10;
            n = n/10;
            rev = rev*10 + rem;
        }

        return rev;
        
    }
    int sumOfPrimesInRange(int n) {
       int rnum = reverseof(n);
       int st = min(n,rnum);
       int end = max(n,rnum);
       int sum = 0;

       for (int i = st; i <= end; i++)
       {
            if (isPrime(i))
            {
                sum = sum + i;
            }
            
       }

       return sum;
       
    }
};

int main(){
    Solution sol;
    
    // Test case 1: n = 10 (reverse = 01 = 1), range [1, 10]
    cout << "Test 1: n = 10" << endl;
    cout << "Reverse of 10: " << sol.reverseof(10) << endl;
    cout << "Sum of primes between 10 and 01: " << sol.sumOfPrimesInRange(10) << endl << endl;
    
    // Test case 2: n = 12 (reverse = 21), range [12, 21]
    cout << "Test 2: n = 12" << endl;
    cout << "Reverse of 12: " << sol.reverseof(12) << endl;
    cout << "Sum of primes between 12 and 21: " << sol.sumOfPrimesInRange(12) << endl << endl;
    
    // Test case 3: n = 15 (reverse = 51), range [15, 51]
    cout << "Test 3: n = 15" << endl;
    cout << "Reverse of 15: " << sol.reverseof(15) << endl;
    cout << "Sum of primes between 15 and 51: " << sol.sumOfPrimesInRange(15) << endl << endl;
    
    // Test case 4: n = 100 (reverse = 001 = 1), range [1, 100]
    cout << "Test 4: n = 100" << endl;
    cout << "Reverse of 100: " << sol.reverseof(100) << endl;
    cout << "Sum of primes between 100 and 001: " << sol.sumOfPrimesInRange(100) << endl << endl;
    
    return 0;
}