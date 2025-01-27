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
int MinNumber(int arr[100],int arrlenght){
    int Min=0 ;
    Min = arr[0];
    for (int  i = 0; i < arrlenght; i++)
    {
        if (arr[i] < Min )
        {
            Min = arr[i];
        }
        
        
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght;
    FillArrayWithRandomNumber(arr, arrlenght);

    cout<<"Array Elements : ";
    PrintArray(arr,arrlenght);

    cout<<"Min Number is : "<<MinNumber(arr,arrlenght);

    return 0;
}