#include <iostream>
 using namespace std;

string ReadPinCode(){

    string PinCode;
    cout<<"Please enter PIN code \n";
    cin>>PinCode;

    return PinCode;

}

bool Login(){
    string PinCode ;
    int counter =3;
    do
    {
        counter--;
        PinCode =ReadPinCode();

    if (PinCode == "1234")
    {
        return 1;
    }else
    {
        cout<<"\n Wrong PIN, YOU HAVE "<<counter<<" more tries\n";
        // system("color 4F");
    };
    
    
        
    } while (counter>=1 && PinCode !="1234");
    return 0;
    
}

 int main(){
  
    if (Login())
    {
        // system("color 2F");//turn screen to green
        cout << "\n Your account balance is "<<7500<<endl;
    }else
    {
        cout<<"\n   Your card bloked call the bank for help \n";
    }
    
    

    return 0;
 }