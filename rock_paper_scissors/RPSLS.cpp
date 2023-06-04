#include <iostream>
#include <stdlib.h>

using namespace std;

/*

Rock, Paper, Scissors, Lizard, Spock:

3 Scissors cuts 2 Paper. 3-2
2 Paper covers 1 Rock. 2-1
1 Rock crushes 4 Lizard.1-4
4 Lizard poisons 5 Spock.4-5
5 Spock smashes 3 Scissors.5-3
3 Scissors decapitate 4 Lizard. 3-4
4 Lizard eats 2 Paper.4-2
2 Paper disproves 5 Spock. 2-5
5 Spock vaporizes 1 Rock. 5-1
1 Rock crushes 3 Scissors. 1-3


winny arrays
user1 = [4, 3]
user2 = [1, 5]
user3 = [2, 4]
user4 = [2, 5]
user5 = [1, 3]

user_choice = [user1, user2, user3, user4, user5]

function (user, computer){
  if user == computer -> draw
  else {

     if computer in user_choice[user-1] ? user wins : computer wins;

  }
}
*/


int user_choice [5][2]  = {{4, 3}, {1, 5}, {2, 4}, {2, 5}, {1, 3}};

bool isPresent(int element, int *arr, int size){
  for (int i=0; i < size; i++){
    if (element == arr[i]){
      return true;
    }
  }
   return false;
}

string startGame(int user, int computer, int (*user_choice)[2]){
  if (user == computer){
    return "Game finished as Draw!";
  }

 int size = sizeof(user_choice) / sizeof(user_choice[0]);
  if (isPresent(computer, user_choice[user-1], 2))
   return "You won!";
  else
   return "Computer Won!";
}


int main(){

  srand(time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;


  cout << "=====================\n";
  cout << "rock paper scissors\n";
  cout << "======================\n";

  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";

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
    case 4: {
      cout << "Computer chose 'Lizard' "<< endl;
    }
    break;
    case 5: {
      cout << "Computer chose 'Spock' "<< endl;
    }
    break;
  }




if (user == computer){
    cout << "Game finished as draw!\n";
  }
  else {
    string result = startGame(user, computer, user_choice);
    cout << result << endl;
  }

  return 0;


}
