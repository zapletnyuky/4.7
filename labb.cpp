#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
  double Pi = 4 * atan(1.0);
  int n = 0;
  cout << "xp = "; cin >> xp;
  cout << "xk = "; cin >> xk;
  cout << "dx = "; cin >> dx;
  cout << "eps = "; cin >> eps;
  cout << fixed;
  cout << "-------------------------------------------------" << endl;
  cout << "|" << setw(5) << "x" << "   |"
    << setw(10) << "exp(x)" << " |"
    << setw(7) << "S" << "    |"
    << setw(5) << "n" << " |"
    << endl;
  cout << "-------------------------------------------------" << endl;
  x = xp;
  if (x>=-1 && x<=1)
  while (x <= xk)
  {
    n = 0; // вираз залежить від умови завдання варіанту
    a = -x; // вираз залежить від умови завдання варіанту
    S = a;
    do {
      n++;
      R = (Pi/2)*(pow(x,2)*((2*n-1)/(2*n+1))*(-1)); // вираз залежить від умови завдання варіанту
      a *= R;
      S += a;
    } while (abs(a) >= eps);
    cout << "|" << setw(7) << setprecision(2) << x << " |"
      << setw(10) << setprecision(5) << exp(x) << " |"
      << setw(10) << setprecision(5) << S << " |"
      << setw(5) << n << " |"
      << endl;
    x += dx;
  }
  else
  cout <<              "Not correct meaning of x"             << endl;
  cout << "-------------------------------------------------" << endl;
  return 0;
}