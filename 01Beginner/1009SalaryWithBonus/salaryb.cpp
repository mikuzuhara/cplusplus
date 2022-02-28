#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  string nome;
  double salario, vendas, bonus, total;

  cin >> nome;
  cin >> salario;
  cin >> vendas;

  bonus = vendas * 0.15;
  total = salario + bonus;

  cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

  return 0;
}