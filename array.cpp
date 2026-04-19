#include <iostream>
using namespace std;

int main() {
    int values[5]; //array to store 5 input values
    double average; //to store average of the values

    cout << "Enter 5 values:\n";
    for (int i = 0; i < 5; i++) { //loop to get 5 values from user input
        cout << "Value " << (i + 1) << ": "; //prompt user for each value
        cin >> values[i]; //store input in the array    
    }

    cout << "Array of values entered: ";
    for (int i = 0; i < 5; i++) {
        cout << values[i];
        if (i < 4) cout << " "; 
    }
    average = 0; //initialize average to 0
    for (int i = 0; i < 5; i++) { //loop to calculate the sum of the values
        average += values[i]; //adding each value to average
            
    }
    average /= 5; //calculate the average
    cout << "\nAverage: " << average << endl;

    return 0;
}