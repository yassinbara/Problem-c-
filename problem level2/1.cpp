#include<iostream>
#include<cmath>

using namespace std;

void PrintTabloHeader(){
cout<<"\n\n\t\t\t Multipliation Table From 1 to 10 \n\n \t";
int count =10;
for (int i = 1; i <= count; i++)
{
    cout<<i<<"\t";
}
cout<<"\n____________________________________________________________________________________________\n";

}
string ColumSperator(int i){

  if (i<10)
  
    return "    |";

  else 
    return "   |";
  
  

}

void PrintMultipliation(){
    PrintTabloHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout<<" "<<i<<ColumSperator(i)<<"\t";
       for (int j = 1; j <= 10; j++)
       {
            cout<<i*j<<"\t";
       }
       
       cout<<"\n";
    }
    
}

int main(){

    PrintMultipliation();
    
    return 0;

}