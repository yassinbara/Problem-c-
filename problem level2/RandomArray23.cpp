#include<iostream>
#include<random>

using namespace std;
int RandomNumber(int from, int To){
    int randNum =rand()% (To - from +1)+from;

    return randNum;
};


void FillArrayWithRandomNumber(int arr[100], int &arrlenght)
{
    cout << "Please enter number of Elements?\n";
    cin >> arrlenght;
    
     

    for (int i = 0; i < arrlenght; i++)
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

int main(){

    srand((unsigned)time(NULL));

    int arr[100],arrlenght;
    FillArrayWithRandomNumber(arr,arrlenght);

    cout<<"\n Array Elements : ";
    PrintArray(arr,arrlenght);


    return 0;
}