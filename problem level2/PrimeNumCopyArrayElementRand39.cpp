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
void AddArrayElement(int Num, int arr[100], int &arrlength)
{

    arrlength++;
    arr[arrlength - 1] = Num;
}
void CoypOnlyPrimeNumber(int arrSource[100],int arrDestination[100],int arrlenght,int &arr2lenght){
    
    for (int i = 0; i < arrlenght; i++)
    {
        if (CheckPrime(arrSource[i])==enPrimeNotPrime::Prime)
        {
            AddArrayElement(arrSource[i],arrDestination,arr2lenght);
        }
        
    }
 
}
void PrintArray(int arr[100],int arrlenght){
    for (int  i = 0; i < arrlenght; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}



int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlenght=0;
    FillArrayWithRandomNumber(arr, arrlenght);
    int arr2[100],arr2lenght=0;
    CoypOnlyPrimeNumber(arr,arr2,arrlenght,arr2lenght);
    cout<<"Array 1 Elements : \n";
    PrintArray(arr,arrlenght);

    cout<<"Print number in Array2: \n";
    PrintArray(arr2,arr2lenght);

    return 0;
}
