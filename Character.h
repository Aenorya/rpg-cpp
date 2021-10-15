#ifndef CHARACTER_H
#define CHARACTER_H
#include <vector>
#include "Item.h"

using namespace std;

class Character{
  private:
  string mName;
  int mForce;
  int mDex;
  int mConstitution;
  int mIntelligence;
  int mWisdom;
  int mCharisma;
  int mMaxLife;
  int mLifePoints;
  std::vector<Item> mInventory;

  public:
  Character();
  Character(string name, int maxLife, int f, int d, int c, int i, int w, int ch);
  ~Character();
  string GetName();
  int GetForce();
  int GetDex();
  int GetConstit();
  int GetIntell();
  int GetWisdom();
  int GetCharisma();
  int GetLifePoints();
 
  void SetForce(int value);
  void SetDex(int value);
  void SetConstit(int value);
  void SetIntell(int value);
  void SetWisdom(int value);
  void SetCharisma(int value);
  void Heal(int points);
  void Hurt(int points);

  void DisplaySumUp();
  void DisplayLife();

  void AddToInventory(Item item);
};



#endif