#include <iostream>
using namespace std;

//function to compute area of square
double computesquareArea(double side) {
    return side * side;
}
//function to compute perimeter of square
double computesquarePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    cout << "Enter the length of the square: ";
    cin >> side;
    
    double area = computesquareArea(side);
    double perimeter = computesquarePerimeter(side);
    cout << "Square Area and Perimeter " << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    
    return 0;
}