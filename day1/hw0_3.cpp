#include<iostream>
using namespace std;

int main()
{
    int times = 0;

    cin >> times;

    while (times-- > 0)
    {
        bool isInches = 0;
        int length = 0;

        cin >> isInches >> length;

        if(isInches)
        {
            cout << 12 * length << "\n";
        }
        else
        {
            int inches = length / 12;
            int remainingFeet = length % 12;
        
            cout << inches << "," << remainingFeet << "\n";
        }
    }

    return 0;
}