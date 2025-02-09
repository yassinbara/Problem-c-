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
void AddArrayElement(int Num, int arr[100], int &arrlength)
{

    arrlength++;
    arr[arrlength - 1] = Num;
}
void CopyOddNumber(int arrSource[100],int arrDestination[100],int arrlenght,int &arrDestinationarrlenght){
    for (int i = 0; i < arrlenght; i++)
    {
        if (arrSource[i]%2!=0)
        {
            
        AddArrayElement(arrSource[i],arrDestination,arrDestinationarrlenght);
        }
        
    }
    
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght=0,arrlenght2=0;
    FillArrayWithRandomNumber(arr, arrlenght);
    int arr2[100];
    CopyOddNumber(arr,arr2,arrlenght,arrlenght2);
    cout<<"Array 1 Elements : \n";
    PrintArray(arr,arrlenght);

    cout<<"Array 2 Elements after copy : \n";
    PrintArray(arr2,arrlenght2);

    return 0;
}