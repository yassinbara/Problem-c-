#include <iostream>
#include <random>

using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
void FillArrayWithRandomNumber(int arr[100], int &arrlenght)
{
    cout<<"please enter number of element?\n";
    cin>>arrlenght;

    for (int  i = 0; i < arrlenght; i++)
    {
        arr[i]=RandomNumber(1,100);
    }
    
}
void PrintArray(int arr[100],int arrlenght){
    for (int  i = 0; i < arrlenght; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int MaxNumber(int arr[100],int arrlenght){
    int Max ;
    for (int  i = 0; i < arrlenght; i++)
    {
        if (arr[i] >Max)
        {
            Max = arr[i];
        }
        
        
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght;
    FillArrayWithRandomNumber(arr, arrlenght);

    cout<<"Array Elements : ";
    PrintArray(arr,arrlenght);

    cout<<"Max Number is : "<<MaxNumber(arr,arrlenght);

    return 0;
}