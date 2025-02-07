#include <iostream>

using namespace std;

int ReadPositiveNumber(string message)
{

    int num;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num < 0);

    return num;
}

void AddArrayElement(int Num, int arr[100], int &arrlength)
{

    arrlength++;
    arr[arrlength - 1] = Num;
}
void InputUserNumbersInArray(int arr[100], int &arrlength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadPositiveNumber("Please enter Number?"), arr, arrlength);
        cout << "\nDo you want to add more numbers?[0] : No,[1] : yes ? ";
         cin >>AddMore;
    } while (AddMore);
}
void PrintArray(int arr[100], int arrlenght)
{

    for (int i = 0; i < arrlenght; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[100],
        arrlength;
    int num;
    InputUserNumbersInArray(arr, arrlength);
    cout<<"\nArray Length : "<<arrlength<<endl;
    cout<<"Aarry elements : ";
    PrintArray(arr, arrlength);

    return 0;
}