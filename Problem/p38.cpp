#include <iostream>
#include <cmath>

using namespace std;

enum enPrimNotPrime
{
    Prime = 1,
    Notprime = 2
};

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do{
    cout << message << endl;
    cin >> Number;
    }while(Number <= 0);
    return Number;
}

enPrimNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);

    for (int counter = 2; counter <= M; counter++)
    {
        if (Number % counter == 0)
        {
            return enPrimNotPrime::Notprime;
        }
    }
    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{

    switch (CheckPrime(Number))
    {
    case enPrimNotPrime::Prime:
        cout << "The number is Prime\n";
        break;

    case enPrimNotPrime::Notprime:
        cout << "The number is Not Prime\n";
        break;
    }
}

int main()
{

    PrintNumberType(ReadPositiveNumber("Pleas enter a positive number?"));

    return 0;
}