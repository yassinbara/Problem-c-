#include <iostream>
using namespace std;
void ReatNumber(float &A, float &B)
{

    cout << "pleas enter your number ?\n";
    cin >> A;
    cout << "pleas enter your number ?\n";
    cin >> B;
}
float CalculateRectangleArea(float A, float B)
{
    return A * B;
}
void PrintResult(float Area)
{
    cout << "\n Rectangle Area is :" << Area << endl;
}

int main()
{
    float A, B;
    ReatNumber(A, B);
    PrintResult(CalculateRectangleArea(A, B));
    return 0;
}