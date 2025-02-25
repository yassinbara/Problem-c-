#include<iostream>
#include<random>

using namespace std;

int RandomNumber(int From,int To){
    int RandNum;
    RandNum = rand()%(To- From +1)+From;
    return RandNum;
}

void FillArrayWithRandomNumber(int arr[100],int &length){
    cout<<"please enter element\n";
    cin>>length;

    for (int  i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1,100);
    }
    
}

int EvenCount(int arr[100],int length){
    int Count=0;
    for (int  i = 0; i < length; i++)
    {
        if (arr[i] % 2==0)
        {
            Count++;
        }
    }
    
    return Count;
}

void PrintArray(int arr[100],int length){
    for (int  i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    srand((unsigned)time(NULL));
    int arr[100],length;
    FillArrayWithRandomNumber(arr,length);

    cout<<"\nArray Elements\n";
    PrintArray(arr,length);
    cout<<"Even Number\n";
    cout<<EvenCount(arr,length);

    return 0;
}