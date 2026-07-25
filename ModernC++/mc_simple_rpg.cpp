#include <bits/stdc++.h>
using namespace std;

enum hero_type
{
    Infantry,
    Cavalry,
    Archer,
    Mage,
    Assassin,
    Tank,
    Healer
};
enum class WeaponType
{
    Sword,
    Spear,
    Axe,
    Bow,
    Crossbow,
    Dagger,
    Mace,
    Hammer,
    Staff,
    Wand,
    Halberd,
    Scythe,
    Katana,
    Shield,
    Unarmed
};
// Hero
struct hero
{
    string name = "Unknown";
    hero_type type_of_hero = hero_type::Infantry;
    WeaponType type_of_weapon = WeaponType::Sword;
    int curr_health = 100;
    int current_attack = 20;
    int current_defence = 100;
    bool is_alive = true;
};
string weaponToString(WeaponType weapon)
{
    switch (weapon)
    {
    case WeaponType::Sword:
        return "Sword";
    case WeaponType::Spear:
        return "Spear";
    case WeaponType::Axe:
        return "Axe";
    case WeaponType::Bow:
        return "Bow";
    case WeaponType::Crossbow:
        return "Crossbow";
    case WeaponType::Dagger:
        return "Dagger";
    case WeaponType::Mace:
        return "Mace";
    case WeaponType::Hammer:
        return "Hammer";
    case WeaponType::Staff:
        return "Staff";
    case WeaponType::Wand:
        return "Wand";
    case WeaponType::Halberd:
        return "Halberd";
    case WeaponType::Scythe:
        return "Scythe";
    case WeaponType::Katana:
        return "Katana";
    case WeaponType::Shield:
        return "Shield";
    case WeaponType::Unarmed:
        return "Unarmed";
    }

    return "Unknown";
}
string heroTypeToString(hero_type type)
{
    switch (type)
    {
    case hero_type::Infantry:
        return "Infantry";
    case hero_type::Cavalry:
        return "Cavalry";
    case hero_type::Archer:
        return "Archer";
    case hero_type::Mage:
        return "Mage";
    case hero_type::Assassin:
        return "Assassin";
    case hero_type::Tank:
        return "Tank";
    case hero_type::Healer:
        return "Healer";
    }

    return "Unknown";
}
#include <iomanip>

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
// creating a hero
void CreateHero(vector<hero> &all_hero)
{
    hero h;

    cout << "\n========== CREATE NEW HERO ==========\n";

    cout << "Enter Hero Name: ";
    cin >> h.name;

    cout << "\nChoose Hero Type\n";
    cout << "1. Infantry\n";
    cout << "2. Cavalry\n";
    cout << "3. Archer\n";
    cout << "4. Mage\n";
    cout << "5. Assassin\n";
    cout << "6. Tank\n";
    cout << "7. Healer\n";
    cout << "Choice: ";

    int heroChoice;
    cin >> heroChoice;

    switch (heroChoice)
    {
    case 1:
        h.type_of_hero = hero_type::Infantry;
        break;
    case 2:
        h.type_of_hero = hero_type::Cavalry;
        break;
    case 3:
        h.type_of_hero = hero_type::Archer;
        break;
    case 4:
        h.type_of_hero = hero_type::Mage;
        break;
    case 5:
        h.type_of_hero = hero_type::Assassin;
        break;
    case 6:
        h.type_of_hero = hero_type::Tank;
        break;
    case 7:
        h.type_of_hero = hero_type::Healer;
        break;
    default:
        cout << "Invalid choice. Defaulting to Infantry.\n";
        h.type_of_hero = hero_type::Infantry;
    }

    cout << "\nChoose Weapon\n";
    cout << "1. Sword\n";
    cout << "2. Spear\n";
    cout << "3. Axe\n";
    cout << "4. Bow\n";
    cout << "5. Crossbow\n";
    cout << "6. Dagger\n";
    cout << "7. Mace\n";
    cout << "8. Hammer\n";
    cout << "9. Staff\n";
    cout << "10. Wand\n";
    cout << "11. Halberd\n";
    cout << "12. Scythe\n";
    cout << "13. Katana\n";
    cout << "14. Shield\n";
    cout << "15. Unarmed\n";
    cout << "Choice: ";

    int weaponChoice;
    cin >> weaponChoice;

    switch (weaponChoice)
    {
    case 1:
        h.type_of_weapon = WeaponType::Sword;
        break;
    case 2:
        h.type_of_weapon = WeaponType::Spear;
        break;
    case 3:
        h.type_of_weapon = WeaponType::Axe;
        break;
    case 4:
        h.type_of_weapon = WeaponType::Bow;
        break;
    case 5:
        h.type_of_weapon = WeaponType::Crossbow;
        break;
    case 6:
        h.type_of_weapon = WeaponType::Dagger;
        break;
    case 7:
        h.type_of_weapon = WeaponType::Mace;
        break;
    case 8:
        h.type_of_weapon = WeaponType::Hammer;
        break;
    case 9:
        h.type_of_weapon = WeaponType::Staff;
        break;
    case 10:
        h.type_of_weapon = WeaponType::Wand;
        break;
    case 11:
        h.type_of_weapon = WeaponType::Halberd;
        break;
    case 12:
        h.type_of_weapon = WeaponType::Scythe;
        break;
    case 13:
        h.type_of_weapon = WeaponType::Katana;
        break;
    case 14:
        h.type_of_weapon = WeaponType::Shield;
        break;
    case 15:
        h.type_of_weapon = WeaponType::Unarmed;
        break;
    default:
        cout << "Invalid choice. Defaulting to Sword.\n";
        h.type_of_weapon = WeaponType::Sword;
    }

    cout << "\nHero created successfully!\n";
    all_hero.push_back(h);
}
// SHowing every value inside of the function every hero
#include <iomanip>

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
// Wanna make a function to make a hero
void make(vector<hero> &all_heros)
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
int main()
{
    vector<hero> Heros;
    make(Heros);
    return 0;
}