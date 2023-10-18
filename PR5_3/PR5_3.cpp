#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double r(const double x);
int main()
{
    double hp, hk, z;
    int n;
    cout << "hp = "; cin >> hp;
    cout << "gk = ";
    cin >> hk;
    cout << "n = ";
    cin >> n;
    double dh = (hk - hp) / n;
    double h = hp;
    while (h <= hk)
    {
        z = r(1 + h * h - 2 * h) + 2 * r(1 + r(h * h)) - 2 * pow(r(1), 2);
        // cout << h << " " << z << endl;
        cout << fixed;
        cout << "--------------------" << endl;
        cout << "|" << setw(5) << setprecision(2) << h << " |"
            << setw(10) << setprecision(6) << z << " |" << endl;

        h += dh;
    }
    cout << "--------------------" << endl;
    return 0;
}
double r(const double x)
{
    if (abs(x) >= 1)
        return (1 - sin(x) * sin(x)) / (exp(x));
    else
    {
        double S = 0;
        int j = 0;
        double a = x / (1 + x);
        S = a;
        do
        {
            j++;
            double R = x / ((2 * j) * (2 * j + 1));
            a *= R;
            S += a;
        } while (j < 7);
        return S;
    }
}