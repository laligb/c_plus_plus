#include <iostream>
#include <string>

using namespace std;

int main(){
  string message = "Hello World!\n";
  cout << message;
  cout << "Codecademy is " << 10 << " years old.";


  //Data types

  // int
  int length = 5;
  std::cout << length << std::endl;

  // double
  double pizza_price = 12.99;
  std::cout << pizza_price << std::endl;

  // Type conversion from double to int
  double x = 6.7;
  int y = (int) x;		// y is now 6
  std::cout << "After conversion, " << x << " becomes " << y << std::endl;

  // char
  char first_letter = 'a';
  std::cout << first_letter << std::endl;

  // string
  std::string word = "Code";
  std::cout << word << std::endl;

  // concatenation
  std::string name = word + "cademy";
  std::cout << name << std::endl;

	// char access
  std::cout << "The third letter of " << name << " is " << name[2] << std::endl;

	// string length
  std::cout << "There are " << name.length() << " letters in " << name << std::endl;

  // boolean
  bool a = true;
  a = false;
  std::cout << a << endl;



  //referencies

  cout << "referencies" << endl;

  int my_grade = 69;
  int& grade = my_grade;

  cout << my_grade << endl;
  cout << grade << endl;

  // Let's do changing and check if reference will change:
  my_grade += 12;

  cout << my_grade << endl;
  cout << grade << endl;

  // let's print memory address:
  string hello = "Hello";
  cout << hello << endl;
  cout << &hello << endl;

  return 0;
}
