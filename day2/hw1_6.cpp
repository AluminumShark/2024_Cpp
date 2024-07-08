#include <iostream>
using namespace std;

int main()
{
    int givingNumber = 0;

    cin >> givingNumber;

    while (1)
    {   
        if (givingNumber % 2 != 0)
        {
            givingNumber *= 3;
            givingNumber++;
            if (givingNumber == 1)
                break;
            else
                cout << givingNumber << ",";
        }
        else
        {
            givingNumber /= 2;
            if (givingNumber == 1)
                break;
            else
                cout << givingNumber << ",";
        }
        
    }

    cout << 1;
    
}