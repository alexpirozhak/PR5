#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double S(const double x, const double eps, int& n, double s);
double A(const double x, const int n, double a);
int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;
    while (true)
    {
        cout << "xp = "; cin >> xp;
        cout << "xk = "; cin >> xk;


        if (xk >= xp && (xp < -1 && xk < -1 || xp>1 && xk>1))
        {
            break;
        }
        cout << "введіть коректні значення" << endl;
    }

    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;


    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |"
        << setw(17) << "log((x+1)/(x-1)" << " |"
        << setw(10) << "s" << " |"
        << setw(5) << "n" << " |"
        << endl;


    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        s = S(x, eps, n, s);

        cout << "|" << setw(8) << setprecision(2) << x << " |"
            << setw(17) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}

double S(const double x, const double eps, int& n, double s)
{
    n = 0;
    double a = 2 / x;
    s = a;
    do {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
    return s;
}

double A(const double x, const int n, double a)
{
    double R = (2 * n - 1) / ((2 * n + 1) * x * x);
    a *= R;
    return a;
}