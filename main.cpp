#include <iostream>
#include "Character.h"
#include "Weapon.h"
using namespace std;

int main() {
  //Create a new Character for the player
  Character player;
  //Display my question
  cout<<"What's your name traveller ?\n";
  string playerName;
  //Store the user input in the variable playerName
  cin>>playerName;
  //Display a message with the provided name
  cout << "Hello "<<playerName<<", nice to meet you!\n";
  //Make the player choose a class and create a character object with the right stats
  int choice;
  do{
    cout<<"Choose your class from the following\n1.Bard\n2.Warrior\n3.Ranger\n4.Sorcerer\n";
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Congratulations young artist!\n";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
      case 2:
        cout<<"Congratulations spartan!\n";
        player = Character(playerName, 16, 18, 6, 20, 4, 8,15);
        break;
      case 3:
        cout<<"Congratulations Aragorn!\n";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
      case 4:
        cout<<"Congratulations, you're a wizard "<<playerName<<"!\n";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
    }
  }while (choice<1 || choice>4);
  //Display the sumup of the player
  player.DisplaySumUp();
  //Create a weapon for the player
  Weapon sunSword = Weapon("Sun Sword", "A sword that shines", WeaponType::Sword, 1.5, 10,25, 3 );
  //Begin the encounter
  cout<<"You meet a terifying enemy\n";
  //Create new terifying enemy
  Character enemy = Character("Big Bad Evil Guy", 20, 8, 6, 17, 19, 18, 20);
  enemy.DisplaySumUp();
  //Create a powerful staff for the enemy
  Weapon enemyWeapon = Weapon("Super staff of glory", "A big staff", WeaponType::Staff, 60, 3);
  //Fight or stare at the enemy
  do{
    cout<<"What do you want to do?\n1.Attack\n2.Do absolutely Nothing\n";
    cin>>choice;
    if(choice ==1){
      cout<<"You attack "<<enemy.GetName()<<" with "<<sunSword.GetName()<< '\n';
      enemy.Hurt(sunSword.GetDamage());
    }else{
      cout<<"You do nothing. That may not be very wise of you.\n";
    }
      cout<<enemy.GetName()<<" attacks with "<<enemyWeapon.GetName()<< '\n';
      player.Hurt(enemyWeapon.GetDamage());
  } while((choice<1||choice>2)||(enemy.GetLifePoints()!=0 && player.GetLifePoints()!=0));
}