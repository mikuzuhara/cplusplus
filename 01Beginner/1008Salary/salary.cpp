#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int numero, horas;
  double horaTrabalhada, salario;

  cin >> numero;
  cin >> horas;
  cin >> horaTrabalhada;

  salario = horas * horaTrabalhada;

  cout << "NUMBER = " << numero << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

  return 0;
}