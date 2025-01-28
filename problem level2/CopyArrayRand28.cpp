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
void CopyArray(int arrSource[100],int arrDestination[100],int arrlenght){
    for (int i = 0; i < arrlenght; i++)
    {
        arrDestination[i]=arrSource[i];
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght;
    FillArrayWithRandomNumber(arr, arrlenght);
    int arr2[100];
    CopyArray(arr,arr2,arrlenght);
    cout<<"Array 1 Elements : \n";
    PrintArray(arr,arrlenght);

    cout<<"Array 2 Elements after copy : \n";
    PrintArray(arr2,arrlenght);

    return 0;
}