#include "Weapon.h"
#include <string>
using namespace std;
//CONSTRUCTORS
Weapon::Weapon(){}

Weapon::Weapon(string name, string desc, WeaponType type, float range, int damage, int price, float weight):Item(name, desc, price, weight, false, true){
  mAttackDamage = damage;
  mAttackRange = range;
}

//DESTRUCTOR
Weapon::~Weapon(){}

//METHODS
WeaponType Weapon::GetWeaponType(){

}
int Weapon::GetRange(){

}
int Weapon::GetDamage(){

}