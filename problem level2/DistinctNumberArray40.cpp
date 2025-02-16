#include <iostream>
#include <random>

using namespace std;

void FillArray(int arr[100], int &arrlength)
{

    arrlength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
void PrintArray(int arr[100], int arrlenght)
{
    for (int i = 0; i < arrlenght; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

short FindNumberPosistionInArray(int Num, int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] == Num)
        {
            return i;
        }
    }
    return -1;
}
bool IsNumberInArray(int Number, int arr[100], int arrlength)
{
    return FindNumberPosistionInArray(Number, arr, arrlength) != -1;
}
void AddArrayElement(int Num, int arr[100], int &arrlength)
{

    arrlength++;
    arr[arrlength - 1] = Num;
}
void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination,
                             DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination,
                            DestinationLength);
        }
    };
}

int main()
{

    int arrSource[100], SourceLength = 0, arrDestination[100],
                        DestinationLength = 0;
    FillArray(arrSource, SourceLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arrSource, SourceLength);
    CopyDistinctNumbersToArray(arrSource, arrDestination,
                               SourceLength, DestinationLength);
    cout << "\nArray 2 distinct elements:\n";
    PrintArray(arrDestination, DestinationLength);
    return 0;
}