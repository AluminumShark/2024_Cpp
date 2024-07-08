#include <iostream>
using namespace std;

int main()
{
    int members = 0, inchesLimit = 0;
    int backAboveLimit = 0, frontAboveLimit = 0, middleAboveLimit = 0;

    cin >> members >> inchesLimit;

    while (members-- > 0)
    {
        int individualFeet = 0, individualCharacter = 0;
        cin >> individualFeet >> individualCharacter;
        if (individualFeet >= 12 * inchesLimit)
        {
            if (individualCharacter == 1)
                backAboveLimit++;
            else if (individualCharacter == 2)
                frontAboveLimit++;
            else if (individualCharacter == 3)
                middleAboveLimit++;
        }
    }

    cout << backAboveLimit << "," << frontAboveLimit << "," << middleAboveLimit;
    return 0;
}