#include "display.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Show(const vector<hero> &all_hero)
{
    cout << "\n=========================================\n";
    cout << "           LIST OF HEROES\n";
    cout << "=========================================\n";

    if (all_hero.empty())
    {
        cout << "No heroes have been created yet.\n";
        cout << "=========================================\n";
        return;
    }

    cout << left
         << setw(5) << "No."
         << setw(20) << "Name"
         << setw(15) << "Class"
         << "Weapon\n";

    cout << "-----------------------------------------\n";

    for (size_t i = 0; i < all_hero.size(); i++)
    {
        cout << left
             << setw(5) << i + 1
             << setw(20) << all_hero[i].name
             << setw(15) << heroTypeToString(all_hero[i].type_of_hero)
             << weaponToString(all_hero[i].type_of_weapon)
             << '\n';
    }

    cout << "=========================================\n";
}

void DisplayHero(const hero &HM)
{
    cout << "\n========================================\n";
    cout << "            HERO PROFILE\n";
    cout << "========================================\n";

    cout << left << setw(18) << "Name" << ": " << HM.name << '\n';
    cout << left << setw(18) << "Hero Type" << ": " << heroTypeToString(HM.type_of_hero) << '\n';
    cout << left << setw(18) << "Weapon" << ": " << weaponToString(HM.type_of_weapon) << '\n';

    cout << "----------------------------------------\n";

    cout << left << setw(18) << "Health" << ": " << HM.curr_health << '\n';
    cout << left << setw(18) << "Attack" << ": " << HM.current_attack << '\n';
    cout << left << setw(18) << "Defence" << ": " << HM.current_defence << '\n';
    cout << left << setw(18) << "Status" << ": " << (HM.is_alive ? "Alive" : "Dead") << '\n';

    cout << "========================================\n\n";
}