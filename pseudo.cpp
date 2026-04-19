#include <iostream>
using namespace std;

int main() { //pseudo equivalent of begin
    double x = 0.0; //setting x to 0
    double y = 20.0; //setting y to 20

    do { //do while loop that will run at least once and continue as long as y is greater than or equal to 6
        y -= 4.0;
        x += 2.0 / y;
    } while (y >= 6.0);

    cout << x << endl; //output the value of x
    return 0;
}