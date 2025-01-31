#include <iostream>
#include <random>

using namespace std;
float ReadPositiveNumber(string message)
{
    int Number;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void BeforeShuffleArray(int arr[100], int &arrlenght)
{

    for (int i = 1; i <= arrlenght; i++)
    {
        arr[i] = i;
    }
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void Swap(int &A, int &B)
{
    int temp;
    temp=A;
    A=B;
    B=temp;
}
void AforeShuffleArray(int arr[100], int arrlenght)
{

    for (int i = 1; i <= arrlenght; i++)
    {
       Swap(arr[RandomNumber(1,arrlenght)],arr[RandomNumber(1,arrlenght)]) ;
        
    }
}

void PrintArray(int arr[100], int arrlenght)
{

    for (int i = 0; i < arrlenght; i++)
    {
        cout << arr[i + 1] << " ";
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], arrlenght = ReadPositiveNumber("please enter number of element?"), num;
    BeforeShuffleArray(arr, arrlenght);
    cout << "\nArray elements before shuffle: \n";
    PrintArray(arr, arrlenght);

    AforeShuffleArray(arr, arrlenght);
    cout << "\nArray elements Afore shuffle: \n";
    PrintArray(arr, arrlenght);

    return 0;
}