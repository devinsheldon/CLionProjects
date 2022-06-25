#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Global constants
const double PI = acos(-1);
const double SEC_IN_DAY = 86400;
const double MU = 1.3274745e20;
const double R_EARTH = 1.496e11;
const double R_VENUS = 1.08e11;
const double R_JUPITER = 7.78e11;
const double R_PLUTO = 5.91e12;
const int FIRST_COLUMN_WIDTH = 10;
const int SECOND_COLUMN_WIDTH = 15;

// Helper functions
double ConvertSecondsToDays(double seconds) {
    return (seconds / SEC_IN_DAY);
}

double CubedSum(double v1, double v2) {
    return pow((v1 + v2), 3);
}

double DirectTime (double r) {
    return (2.*sqrt(fabs(r-1.496e11)/10)/86400.);
}

double HohmannTime(double r1, double r2 = R_EARTH) {
    return ConvertSecondsToDays((PI * (sqrt(CubedSum(r1, r2) / (8 * MU)))));
}

int main() {
    cout << left << fixed << setprecision(2);

    cout << setw(FIRST_COLUMN_WIDTH) << "Planet";
    cout << setw(SECOND_COLUMN_WIDTH) << "Hohmann Time";
    cout << "Direct Time" << endl;

    cout << setw(FIRST_COLUMN_WIDTH) << "Venus";
    cout << setw(SECOND_COLUMN_WIDTH) << HohmannTime(R_VENUS);
    cout << DirectTime(R_VENUS) << endl;

    cout << setw(FIRST_COLUMN_WIDTH) << "Jupiter";
    cout << setw(SECOND_COLUMN_WIDTH) << HohmannTime(R_JUPITER);
    cout << DirectTime(R_JUPITER) << endl;

    cout << setw(FIRST_COLUMN_WIDTH) << "Pluto";
    cout << setw(SECOND_COLUMN_WIDTH) << HohmannTime(R_PLUTO);
    cout << DirectTime(R_PLUTO) << endl;

    return 0;
}