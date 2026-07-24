#include <iostream>
using namespace std;
int main()
{
    double mydouble = 3.14;
    double &myreference = mydouble;
    myreference = 6.28;
    cout << "The values are: " << mydouble << " and " << myreference << '\n';
    mydouble = 9.45;
    cout << "The values are: " << mydouble << " and " << myreference << '\n';
}