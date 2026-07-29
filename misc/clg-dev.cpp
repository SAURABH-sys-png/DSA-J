#include <bits/stdc++.h>

using namespace std;

struct Students
{
    string name;
    int urn;
    int Sno;
};

void printData(vector<Students> data)
{
    cout << "Sno.    Name     URN" << endl;
    for (auto &entry : data)
    {
        cout << entry.Sno << "     " << entry.name << "      " << entry.urn << endl;
    }
}

int main()
{
    int n;
    cout << "Enter how many entries wanna store : ";
    cin >> n;
    vector<Students> data(n);
    for (int i = 0; i < n; i++)
    {
        Students s1;
        cout << "\n--- Entry " << (i + 1) << " ---" << endl;
        cout << "Enter Name: ";
        cin >> s1.name;
        cout << "Enter URN: ";
        cin >> s1.urn;
        cout << "Enter Serial No: ";
        cin >> s1.Sno;
        data[i] = s1;
        cout << "Entry successfully made!" << endl;
    }

    printData(data);
}