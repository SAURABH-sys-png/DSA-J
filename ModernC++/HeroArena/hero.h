#ifndef HERO_H
#define HERO_H

#include <string>
#include <vector>

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

struct hero
{
    std::string name = "Unknown";
    hero_type type_of_hero = Infantry;
    WeaponType type_of_weapon = WeaponType::Sword;
    int curr_health = 100;
    int current_attack = 20;
    int current_defence = 100;
    bool is_alive = true;
};

std::string heroTypeToString(hero_type);
std::string weaponToString(WeaponType);

void CreateHero(std::vector<hero>&);

#endif