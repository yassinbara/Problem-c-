#include <iostream>
#include <random>

using namespace std;

void FillArray(int arr[100], int &arrlength)
{

    arrlength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
void PrintArray(int arr[100], int arrlenght)
{
    for (int i = 0; i < arrlenght; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool IsPalindromeArray(int arr[100],int arrlength){
    for (int  i = 0; i < arrlength; i++)
    {
        if (arr[i]!=arr[arrlength - i -1])
        {
            return false;
        }
        
    }
    return true;
    
}
int main()
{

    int arr[100], arrlength = 0;
    FillArray(arr, arrlength);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrlength);
    if (IsPalindromeArray(arr, arrlength))
    cout << "\nYes array is Palindrome\n";
    else
    cout << "\nNO array is NOT Palindrome\n";

    return 0;
}