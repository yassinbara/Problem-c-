#include <iostream>
#include <random>

using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum;

    RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
int ReadPositiveNumber(string message)
{

    int Number;
    do
    {
        cout << message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

void FillArray(int arr[100], int &arrlength)
{

    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
int FindNumberPositionInArray(int number, int arr[100], int arrlength)
{

    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }

    return -1;
}
void PrintArray(int arr[100], int arrlength)
{
    cout << "Array 1 elements : \n";
    for (int i = 0; i < arrlength; i++)
    {
        cout  << arr[i]<< " ";
    }
    cout << endl;
}
void PrintNumberSeach(int number, int arr[100], int arrlength)
{

    cout << " Number you are looking for is : " << number << endl;
    short NumPosistion = FindNumberPositionInArray(number, arr, arrlength);
    if (NumPosistion == -1)
    {
        cout << "The number is not found : :-( " << endl;
    }
    else
    {
        cout << "The number found at position : " << NumPosistion << endl;
        cout << "the number found its order : " << NumPosistion + 1 << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100],
        arrlength = ReadPositiveNumber("Please enter Number of element ?");
    FillArray(arr, arrlength);
    PrintArray(arr, arrlength);
    int number = ReadPositiveNumber("Please enter Number to search for ?");

    PrintNumberSeach(number, arr, arrlength);

    return 0;
}