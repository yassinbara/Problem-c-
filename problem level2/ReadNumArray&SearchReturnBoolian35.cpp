#include <iostream>
#include <random>

using namespace std;
int RandomNumber(int From, int To)
{
    int Num = rand() % (To - From + 1) + From;

    return Num;
}

int ReadPositiveNumber(string message)
{
    int Num;
    do
    {
        cout << message<<endl;
        cin >> Num;
    } while (Num<0);
    return Num;
}
void FillArray(int arr[100],int &arrlength){
    for (int  i = 0; i < arrlength; i++)
    {
        arr[i]=RandomNumber(1,100);
    }
    
}
void PrintArrey(int arr[100],int arrlength){
    cout <<"Array 1 elements :\n";
    for (int  i = 0; i < arrlength; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
}

bool FindNumberPosistionInArray(int Num,int arr[100],int arrlength){
    for (int  i = 0; i < arrlength; i++)
    {
        if (arr[i]== Num)
        {
            return 1;
        }
        
    }
    return 0;
    
}
void PrintNumberSeach(int number, int arr[100], int arrlength)
{

    cout << " Number you are looking for is : " << number << endl;
    short NumPosistion = FindNumberPosistionInArray(number, arr, arrlength);
    if (NumPosistion == 0 )
    {
        cout << "No,The number is not found : :-( " << endl;
    }
    else
    {
        cout << "Yes,The number is  found : :-) " << endl;
    }
}
int main()
{

    srand((unsigned)time(NULL));

    int arr[100],
    arrlength = ReadPositiveNumber("Please enter of element?");
    FillArray(arr,arrlength);
    PrintArrey(arr,arrlength);
    int Num =ReadPositiveNumber("Please enter a number to search for ?") ;
    PrintNumberSeach(Num,arr,arrlength);
    return 0;
}