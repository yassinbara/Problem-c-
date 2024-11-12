#include <iostream>
using namespace std;

int ReadNumber()
{

    int Num;
    cout << "Please enter a Number?" << endl;
    cin >> Num;

    return Num;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{

    int countr = N + 1;
    cout << "Range printed using While statement: \n";
    while (countr >= 1)
    {
        countr--;
        cout << countr << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{

    int countr = N + 1;
    cout << "Range printed using Do While statement: \n";
    do
    {

        countr--;
        cout << countr << endl;
    } while (countr > 1);
}

void PrintRangeFrom1toN_UsingFor(int N)
{

    cout << "Range printed using FOR statement: \n";
    for (int i = N; i >= 1; i--)
    {

        cout << i << endl;
    }
}

int main()
{

    int N = ReadNumber();

    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);

    return 0;
}