#include <iostream>
using namespace std; 

int main() {
    int days; //to store input 
    long long seconds; //to store converted days 
  
    cout << "Enter number of days in numerics ";
    cin >> days;

    seconds = (long long)days * 24 * 60 * 60; //24 hours times 60 minutes times 60 secs

    cout << "There are  " << seconds << " seconds in " << days <<" days " ;

    return 0;
}