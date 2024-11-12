#include <iostream>
using namespace std;

void ReadNumber(int &num1, int &num2)
{
    cout << "pleas enter your number1? \n";
    cin >> num1;
    cout << "pleas enter your number2? \n";
    cin >> num2;
}

void Swap(int &A, int &B)
{
    int temp;
    temp=A;
    A=B;
    B=temp;
}
void PrintResults(int Max,int num2)
{
    cout << "\n the Maximum Number is : " << Max << endl;
    cout << "\n the Maximum Number is : " << num2<< endl;
}

int main()
{
    int num1, num2;
    ReadNumber(num1, num2);
    PrintResults(num1, num2);
    swap(num1,num2);
    PrintResults(num1, num2);
    return 0;
}