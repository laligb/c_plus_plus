#include <iostream>

using namespace std;
int main() {
  double pesos, reais, soles;
  double dollars;

  cout << "Enter number of Colombian Pesos:" << endl;
  cin >> pesos;

  cout << "Enter number of Colombian Reais" << endl;
  cin >> reais;

  cout << "Enter number of Colombian Soles:" << endl;
  cin >> soles;

  /*
   1 Peso = 0.057 USD
   1 Reais = 0.20 USD
   1 Sol = 0.27 USD
   */

   double peso_to_dollar, reais_to_dollar, sol_to_dollar;


   dollars = (pesos * 0.057) + (reais * 0.20)
    + (soles * 0.27);

  cout << "US Dollars = $" << dollars << endl;


  return 0;


}
