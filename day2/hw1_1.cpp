#include <iostream>
using namespace std;

int main()
{
    bool male = 0;
    int age = 0, male_LegalAge = 18, female_LegalAge = 16;
    
    cin >> male >> age;

    if (male)
    {
        if (age >= male_LegalAge)
            cout << "Yes";
        else
            cout << "No";
        
    }
    else
    {
        if (age >= female_LegalAge)
            cout << "Yes";
        else
            cout << "No";
        
    }

    return 0;

}