#include <iostream>
using namespace std;

enum enOddorEven
{
    Odd = 1,
    Even = 2
};

int ReadNumber()
{

    int Num;
    cout << "Please enter a Number?" << endl;
    cin >> Num;

    return Num;
}

enOddorEven CheckOddOrEven(int Num)
{

    if (Num % 2 != 0)
        return enOddorEven::Odd;
    else
        return enOddorEven::Even;
}

int PrintRangeFrom1toN_UsingWhile(int N)
{

    int countr = 0;
    int sum = 0;
    cout << "Range printed using While statement: \n";
    while (countr < N)
    {
        countr++;
        if (CheckOddOrEven(countr) == enOddorEven::Odd)
        {
            sum += countr;
        }
    }

    return sum;
}

int PrintRangeFrom1toN_UsingDoWhile(int N)
{

    int countr = 0, sum = 0;
    cout << "Range printed using Do While statement: \n";
    do
    {

        countr++;
        if (CheckOddOrEven(countr) == enOddorEven::Odd)
        {
            sum += countr;
        }
    } while (countr < N);

    return sum;
}

int PrintRangeFrom1toN_UsingFor(int N)
{
    int sum = 0;
    cout << "Range printed using FOR statement: \n";
    for (int i = 1; i <= N; i++)
    {

        if (CheckOddOrEven(i) == enOddorEven::Odd)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{

    int N = ReadNumber();

    cout << PrintRangeFrom1toN_UsingWhile(N) << endl;
    cout << PrintRangeFrom1toN_UsingDoWhile(N) << endl;
    cout << PrintRangeFrom1toN_UsingFor(N) << endl;

    return 0;
}