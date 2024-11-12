#include <iostream>
using namespace std;

void ReadNumber(int &num1, int &num2)
{
    cout << "pleas enter your number1? \n";
    cin >> num1;
    cout << "pleas enter your number2? \n";
    cin >> num2;
}

int MaxOf2Number(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void PrintResults(int Max)
{
    cout << "\n the Maximum Number is : " << Max << endl;
}

int main()
{
    int num1, num2;
    ReadNumber(num1, num2);
    PrintResults(MaxOf2Number(num1, num2));
    return 0;
}