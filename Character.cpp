#include <iostream>
#include "Character.h"
#include "Item.h"
using namespace std;

Character::Character(string name, int maxLife, int f, int d, int c, int i, int w, int ch){
  mName = name;
  mMaxLife = maxLife;
  mLifePoints = maxLife;
  mForce = f;
  mDex = d;
  mConstitution = c;
  mIntelligence = i;
  mWisdom = w;
  mCharisma = ch;
}

Character::Character(){}
Character::~Character(){}

string Character::GetName(){
  return mName ;
}
int Character::GetForce(){
  return mForce ;
}
int Character::GetDex(){
  return mDex ;
}
int Character::GetConstit(){
  return mConstitution ;
}
int Character::GetIntell(){
  return mIntelligence ;
}
int Character::GetWisdom(){
  return mWisdom ;
}
int Character::GetCharisma(){
  return mCharisma ;
}
int Character::GetLifePoints(){
  return mLifePoints ;
}

void Character::SetForce(int value){mForce = value;}
void Character::SetDex(int value){mDex = value;}
void Character::SetConstit(int value){mConstitution = value;}
void Character::SetIntell(int value){mIntelligence = value;}
void Character::SetWisdom(int value){mWisdom = value;}
void Character::SetCharisma(int value){mCharisma = value;}
void Character::Heal(int points){
  mLifePoints = min((mLifePoints+points), mMaxLife);
  DisplayLife();
}
void Character::Hurt(int points){
  mLifePoints = max((mLifePoints-points), 0);
  if(mLifePoints == 0){
    cout<<"You're dead "<<mName<<'\n';
  } else{
    DisplayLife();
  }
}


void Character::DisplaySumUp(){
  cout<<mName<<"has the following characteristics:\n";
  cout<<"Force : "<<mForce<<'\n';
  cout<<"Dexterity : "<<mDex<<'\n';
  cout<<"Constitution : "<<mConstitution<<'\n';
  cout<<"Int : "<<mForce<<'\n';
  cout<<"Wisdom : "<<mWisdom<<'\n';
  cout<<"Charisma : "<<mCharisma<<'\n';
}

void Character::DisplayLife(){
  cout<<mName<<" has "<<mLifePoints<<" life points.\n";
}

void Character::AddToInventory(Item item){
  mInventory.push_back(item);
}
