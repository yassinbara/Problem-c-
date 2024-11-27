#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool IsPerfectNumber(int num)
{

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
        }
    return num == sum;
}

void PrintResult(int num)
{

    if (IsPerfectNumber(num))
    {
        cout << num << " Is Perfect Number .\n";
    }
    else
        cout << num << " Is not Perfect Number .\n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Please enter a Perfect Number?"));
    return 0;
}