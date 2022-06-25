#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double CalcRectanglePerimeter(double rectHeight, double rectWidth);
void DoubleRectanglePerimeter(double& rectHeight, double& rectWidth);
void PrintRectanglePerimeter(double rectHeight, double rectWidth);

double CalcAreaOfCircle(double radius);
double CalcCircumferenceOfCircle(double radius);
double CalcVolumeOfSphere(double radius);
void Swap(int& valA, int& valB);
void Swap(double& valA, double& valB);

const double PI = 3.14;

int main() {
    cout << "Getting this line to print earns you points!" << endl;

    double height = 0;
    double width = 0;
    double radius = 0;

    cin >> height >> width >> radius;

    PrintRectanglePerimeter(height, width);
    cout << CalcRectanglePerimeter(height, width) << endl;
    cout << "... about to double height and width..." << endl;
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);


    return 0;
}

double CalcRectanglePerimeter(double rectHeight, double rectWidth) {
    double rectPerimeter = (rectHeight * 2) + (rectWidth * 2);
    return rectPerimeter;
}

void DoubleRectanglePerimeter(double& rectHeight, double& rectWidth) {
    rectHeight *= 2;
    rectWidth *= 2;
}

void PrintRectanglePerimeter(double rectHeight, double rectWidth) {
    cout << fixed << setprecision(1);
    cout  << "A rectangle with height " << rectHeight << " and width " << rectWidth
          << " has a perimeter of " << CalcRectanglePerimeter(rectHeight, rectWidth)
          << "." << endl;
}

// A = PI * r^2
double CalcAreaOfCircle(double radius) {
    double circleArea = PI * pow(radius, 2);
    return circleArea;
}

double CalcCircumferenceOfCircle(double radius) {
    double circleCircumference = PI * radius * 2;
    return circleCircumference;
}

double CalcVolumeOfSphere(double radius) {
    double sphereVolume = 4.0 / 3.0 * PI * pow(radius, 3);
    return sphereVolume;
}

void Swap(int& valA, int& valB) {
    int temp = valA;
    valA = valB;
    valB = temp;
}

void Swap(double& valA, double& valB) {
    double temp = valA;
    valA = valB;
    valB = temp;
}