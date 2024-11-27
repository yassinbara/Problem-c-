#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeNotprime
{
    Prime = 1,
    Notprime = 2
};

int ReadPontNmber(string message)
{

    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
        /* code */
    } while (Number <= 0);

    return Number;
}

enPrimeNotprime CheckNumber(int num)
{

    int M = round(num / 2);

    for (int i = 2; i <= M; i++)
    {
        if (num % i == 0)
        {
            return enPrimeNotprime::Notprime;
        }

    }
        return enPrimeNotprime::Prime;
}

void PrinNumber(int num)
{

    cout << "\n Prime Number from " << 1 << " to "
         << num << " are : " << endl;

    for (int cont = 1; cont <= num; cont++)
    {
        if (CheckNumber(cont) == enPrimeNotprime::Prime)
        {
            cout << cont << endl;
        }
    }
}

int main()
{

    PrinNumber(ReadPontNmber("Please enter a positive number ?"));

    return 0;
}