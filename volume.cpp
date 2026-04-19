#include <iostream>
using namespace std;
#include <cmath> //for pow function
int main() {
    double radius; //to store input 
    double volume; //to store converted days 
  
    cout << "Enter the radius of the sphere in numerics ";
    cin >> radius;

    volume = (4.0/3.0) * 3.14159 * pow(radius, 3); //4/3 times pi times r cubed

    cout << "The volume of the sphere is " << volume << " cubic units" ;

    return 0;
}