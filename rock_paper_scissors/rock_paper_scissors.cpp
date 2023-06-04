#include <iostream>
#include <stdlib.h>

using namespace std;


/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
Rock crushes Scissors.
*/

int main(){

  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;


  cout << "=====================\n";
  cout << "rock paper scissors\n";
  cout << "======================\n";

  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";

  cout << "shoot! " << endl;

  cin >> user;

  switch (computer){
    case 1: {
      cout << "Computer chose 'Rock' "<< endl;
    }
    break;
    case 2: {
      cout << "Computer chose 'Paper' "<< endl;
    }
    break;
    case 3: {
      cout << "Computer chose 'Scissors' "<< endl;
    }
    break;

  }


   if (user == computer){
        cout << "Game finished as draw!\n";
    }


  switch (user) {
    case 1:
      if (computer == 2){
        cout << "Computer Won!\n";
      }else if (computer == 3){
        cout << "You Won!\n";
      }
      break;
    case 2:
      if (computer == 1){
        cout << "You Won!\n";
      }else if (computer == 3){
        cout << "Computer Won!\n";
      }
      break;
    case 3:
      if (computer == 1){
        cout << "Computer Won!";
      }else if (computer == 2){
        cout << "You Won!\n";
      }
      break;
  }



  return 0;


}
