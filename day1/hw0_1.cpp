#include <iostream>
using namespace std;

int main()
{
    int initialFeet = 0, remainingFeet = 0, inches = 0;
    
    // Enter feet
    cin >> initialFeet;

    // Calculate inches
    inches = initialFeet / 12;

    // Remaining feet
    remainingFeet = initialFeet - 12 * inches;

    // Result
    cout << inches << "," << remainingFeet;

    return 0;
}