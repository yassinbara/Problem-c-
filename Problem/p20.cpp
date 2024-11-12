#include <iostream>
 #include <cmath>

using namespace std;
void ReadSquareSide(float &A){
    cout<<"pleas enter your number?\n";
    cin>>A;
   


}
float CircleAreaInscribedInSquare(float A){
    return (pow(A,2)*3.14159)/4;
}
void PrintResult(float area){
    cout<<"\nyour A Rectangle Area  is:"<<area;
}
int main(){
    float A;
    ReadSquareSide(A);
    PrintResult(CircleAreaInscribedInSquare(A));
    return 0;
}
