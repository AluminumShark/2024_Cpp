#include <iostream>
using namespace std;

int main()
{
    int size = 0, sum = 0, largest = 0;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int addNumber = 0;
        cin >> addNumber;
        sum += addNumber;
        if (i == 0)
        {
            largest = addNumber;
        }
        else if (addNumber > largest)
        {
            largest = addNumber;
        }
        
    }
    
    cout << largest << "," << sum;

    return 0;
}