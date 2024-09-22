#include <iostream>
using namespace std;

// Function to calculate the third angle of a triangle
int ThirdAngle(int angle4, int angle6) {
    return 180 - (angle4 + angle6);
}

int main() {
    int angle4, angle6;

    // Input the two angles
    cout << " Enter the first angle of the triangle: ";
    cin >> angle4;
    cout << " Enter the second angle of the triangle: ";
    cin >> angle6;

    // Calculate and output the third angle
    int thirdAngle = ThirdAngle(angle4, angle6);
    cout << " The third angle of the triangle is: " << thirdAngle << " degrees" << endl;

    return 0;
}