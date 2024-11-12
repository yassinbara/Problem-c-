#include <iostream>
using namespace std;

void ReadNumber(int &A, int &B, int &C)
{
    cout << "pleas enter your number1? \n";
    cin >> A;
    cout << "pleas enter your number2? \n";
    cin >> B;
    cout << "pleas enter your number3? \n";
    cin >> C;
}

int MaxOf2Number(int A, int B, int C)
{
    if (A > B && A > C)
        return A;
    else if (B > C)
        return B;
    else
        return C;
}
void PrintResults(int Max)
{
    cout << "\n the Maximum Number is : " << Max << endl;
}

int main()
{
    int A, B, C;
    ReadNumber(A, B, C);
    PrintResults(MaxOf2Number(A, B, C));
    return 0;
}