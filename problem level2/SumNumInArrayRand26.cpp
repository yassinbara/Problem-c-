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
int SumOfAllNumber(int arr[100],int arrlenght){
    int Sum=0 ;
    
    for (int  i = 0; i < arrlenght; i++)
    {
        
        
            Sum =Sum + arr[i];
        
        
        
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght;
    FillArrayWithRandomNumber(arr, arrlenght);

    cout<<"Array Elements : ";
    PrintArray(arr,arrlenght);

    cout<<"Sum Of All Number is : "<<SumOfAllNumber(arr,arrlenght);

    return 0;
}