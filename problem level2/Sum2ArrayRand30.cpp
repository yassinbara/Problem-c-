#include <iostream>
#include <random>

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

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
void FillArrayWithRandomNumber(int arr[100], int &arrlenght)
{
   
    for (int i = 0; i < arrlenght; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void SumOf2Array(int arr1[100],int arr2[100],int arrSum[100],int arrlenght)
{
    for (int  i = 0; i < arrlenght; i++)
    {
       arrSum[i]= arr1[i] +arr2[i];
    }
    

   
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
    srand((unsigned)time(NULL));
    int arr[100],arr2[100],arrSum[100];
    int arrlenght = ReadPositiveNumber("please enter number of element?");

    FillArrayWithRandomNumber(arr, arrlenght);
    FillArrayWithRandomNumber(arr2, arrlenght);
    SumOf2Array(arr,arr2,arrSum, arrlenght);
    cout << "Array 1 Elements : \n";
    PrintArray(arr, arrlenght);

    cout << "Print number in Array2: \n";
    PrintArray(arr2, arrlenght);
    cout << "Print number in Array2: \n";
    PrintArray(arrSum, arrlenght);

    return 0;
}
