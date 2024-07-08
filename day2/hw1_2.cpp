#include <iostream>
using namespace std;

int main()
{
    int yearNumber = 0, leapYear = 0;

    cin >> yearNumber;
    
    if (yearNumber % 4 == 0 && yearNumber % 100 == 0 && yearNumber % 400 == 0)
    {
        yearNumber = 1;
    }
    else if (yearNumber % 4 == 0 && yearNumber % 100 == 0)
    {
        yearNumber = 0;
    }
    else if (yearNumber % 4 == 0)
    {
        yearNumber = 1;
    }
    else
    {
        yearNumber = 0;
    }

    cout << yearNumber;

    return 0;

}