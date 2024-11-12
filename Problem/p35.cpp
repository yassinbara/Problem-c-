#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stPiggyBankContenet
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{

    stPiggyBankContenet PiggyBankContenet;
    cout << "Please enter a Pennies? \n";
    cin >> PiggyBankContenet.Pennies;
    cout << "Please enter a Nickels ? \n";
    cin >> PiggyBankContenet.Nickels;
    cout << "Please enter a  Dimes? \n";
    cin >> PiggyBankContenet.Dimes;
    cout << "Please enter a  Quartars? \n";
    cin >> PiggyBankContenet.Quarters;
    cout << "Please enter a Dollars ? \n";
    cin >> PiggyBankContenet.Dollars;
    return PiggyBankContenet;
}
int CalculeteTotalPannies(stPiggyBankContenet PiggyBankContenet)
{
    int Totalpennies = 0;

    Totalpennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 +
                   PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 +
                   PiggyBankContenet.Dollars * 100;

    return Totalpennies;
}

int main()
{
    int totalpennies = CalculeteTotalPannies(ReadPiggyBankContenet());

    cout << endl
         << "Total Pennies = " << totalpennies << endl;
    cout << endl
         << "Total Dallars = " << (float)totalpennies / 100 << endl;
    return 0;
}