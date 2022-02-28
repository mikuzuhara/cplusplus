#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  #define PI 3.14159
  double r, area;
  cin >> r;
  area = PI * r * r;
  cout << "A=" << fixed << setprecision(4) << area << endl;

}