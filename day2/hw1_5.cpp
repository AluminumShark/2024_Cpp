#include <iostream>
using namespace std;

int main()
{
    int size = 0, target = 0, sum = 0;

    cin >> size >> target;

    for (int i = 0; i < size; i++)
    {
        int addNumber = 0;

        cin >> addNumber;

        if (addNumber == target)
        {
            break;
        }
        else
        {
            sum += addNumber;
        }
        
    }

    cout << sum;

    return 0;
    
}