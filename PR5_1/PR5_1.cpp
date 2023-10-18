#include <iostream>
#include <cmath>
using namespace std;

double g(const double a, const double b, const double c); // прототип
int main()
{
    double x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    double c = (g(x * x, 1, y) - g(y * y, x, 1)) / (1 + g(sqrt(x), y, 1));
    cout << "c = " << c << endl;
    return 0;
}
double g(const double a, const double b, const double c) // визначення

{
    return ((a * a + sin(b) + 1) / (1 + c * c));
}