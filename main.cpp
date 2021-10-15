#include <iostream>
#include "Character.h"
#include "Weapon.h"
using namespace std;

int main() {
  //Characteristics
  Character player;
  //Display my question
  cout<<"What's your name traveller ?\n";
  string playerName;
  //Store the user input in the variable playerName
  cin>>playerName;
  //Display a message with the provided name
  cout << "Hello "<<playerName<<", nice to meet you!\n";

  cout<<"Choose your class from the following\n1.Bard\n2.Warrior\n3.Ranger\n4.Sorcerer\n";

  int choice = -1;
  while (choice<1 || choice>4){
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Congratulations young artist!";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
      case 2:
        cout<<"Congratulations spatian!";
        player = Character(playerName, 16, 18, 6, 20, 4, 8,15);
        break;
      case 3:
        cout<<"Congratulations spatian!";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
      case 4:
        cout<<"Congratulations spatian!";
        player = Character(playerName, 10, 12, 15,16,20,4,18);
        break;
    }
  }
  player.DisplaySumUp();
  player.DisplayLife();
  player.Hurt(5);
  player.Heal(15);
  Weapon("Sun Sword", "A sword that shines", WeaponType::Sword, 1.5, 5,25, 3 );
  
}