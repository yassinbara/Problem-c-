#include <iostream>
#include <random>

using namespace std;
enum enPrimeNotPrime{Prime= 1, NotPrime=2};

enPrimeNotPrime CheckPrime(int Num){
    int M = round(Num/2);

    for (int  counter= 2; counter <= M; counter++)
    {
        if (Num%counter==0)
        {
            return enPrimeNotPrime::NotPrime;
        }
        
    }
    return enPrimeNotPrime::Prime;
}

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
void CoypOnlyPrimeNumber(int arrSource[100],int arrDestination[100],int arrlenght,int &arr2lenght){
    int counter=0;
    for (int i = 0; i < arrlenght; i++)
    {
        if (CheckPrime(arrSource[i])==enPrimeNotPrime::Prime)
        {
            arrDestination[counter]=arrSource[i];
            counter++;
        }
        
    }
    arr2lenght=--counter;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght;
    FillArrayWithRandomNumber(arr, arrlenght);
    int arr2[100],arr2lenght;
    CoypOnlyPrimeNumber(arr,arr2,arrlenght,arr2lenght);
    cout<<"Array 1 Elements : \n";
    PrintArray(arr,arrlenght);

    cout<<"Print number in Array2: \n";
    PrintArray(arr2,arr2lenght);

    return 0;
}
