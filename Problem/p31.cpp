#include <iostream>
#include<string>
using namespace std;
int RaedNumber(){
    int num;
    cout<<"Please enter Number?\n";
    cin>>num;

    return num;
}

void PowerOf2_3_4(int num){
    int a,b,c;
    a=num*num;
    b=num*num*num;
    c=num*num*num*num;

    cout<<a<<" "<<b<<" "<<c<<endl;
    

}

int main(){

    PowerOf2_3_4(RaedNumber());
    return 0;


}