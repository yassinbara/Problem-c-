#include <iostream>
 #include <cmath>

using namespace std;
void ReadCircumference(float &l){
    cout<<"pleas enter your number?\n";
    cin>>l;
   


}
float CircleAreaInscribedInSquare(float l){
    return pow(l,2)/(4*3.141592653589793238);
}
void PrintResult(float area){
    cout<<"\nyour l Rectangle Area  is:"<<area;
}
int main(){
    float l;
    ReadCircumference(l);
    PrintResult(CircleAreaInscribedInSquare(l));
    return 0;
}
