#include <iostream>
using namespace std;

int main()
{
    bool isInches = 0;
    int length = 0;

    cin >> isInches >> length;

    if(isInches)
    {
        cout << 12 * length;
    }
    else
    {
        int inches = length / 12;
        int remainingFeet = length % 12;
        
        cout << inches << "," << remainingFeet;
    }
    return 0;
}