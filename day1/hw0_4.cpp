#include<iostream>
using namespace std;

int main()
{
    int members = 0, inchesLimit = 0, aboveLimit = 0;

    cin >> members >> inchesLimit;

    while (members-- > 0)
    {
        int individualFeet = 0;
        cin >> individualFeet;
        if (individualFeet >= 12 * inchesLimit)
        {
            aboveLimit++;
        }
    }
    
    cout << aboveLimit;
    return 0;
}