#include <iostream>
using namespace std;

int ReadpositiveNumber(string message)
{
    int Num;

    do
    {

        cout << message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int Factorial(int N)
{
    int F = 1;
    cout << "Range printed using FOR statement: \n";
    for (int i = 1; i <= N; i++)
    {

        F *= i;
    }

    return F;
}

int main()
{

    cout << Factorial(ReadpositiveNumber("Enter N?")) << endl;

    return 0;
}