#include "menu.h"
#include "display.h"
#include <iostream>
#include <iomanip>
using namespace std;

void MainMenu(vector<hero>& all_heros)
{
    while (true)
    {
        cout << "\n";
        cout << "=========================================\n";
        cout << "          ⚔️  HERO ARENA ⚔️\n";
        cout << "=========================================\n";
        cout << "1. Create New Hero\n";
        cout << "2. Show Existing Heroes\n";
        cout << "3. Exit Game\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        int n;
        cin >> n;
        if (n == 1)
        {
            CreateHero(all_heros);
        }
        else if (n == 2)
        {
            Show(all_heros);
        }
        else if(n==3){
            break;
        }
    }
}