#include <iostream>
using namespace std;

int main()
{
    int baseDemand = 0, priceSensitivity = 0, unitCost = 0;
    int unitPrice = 0, maxProfit = 0;

    cin >> baseDemand >> priceSensitivity >> unitCost;

    unitPrice = (baseDemand + priceSensitivity * unitCost) / (2 * priceSensitivity);

    maxProfit = (baseDemand - priceSensitivity * unitPrice) * (unitPrice - unitCost);

    cout << unitPrice << "," << maxProfit;

    return 0;
}