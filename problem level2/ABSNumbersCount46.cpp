#include<iostream>

using namespace std;

float MyABS(float num){
    if (num >0 )
    {
        return num;
    }else
        return num*-1;
    
    
}
float ReadNumber(){
    float num;
    cout<<"please enter number?\n ";
    cin>>num;

    return num;
}

int main(){

    float number = ReadNumber();

    cout<<"\nMy abs Result : "<<MyABS(number);
    cout<<"\nC++ ABS Result : "<<abs(number);

    return 0;
}