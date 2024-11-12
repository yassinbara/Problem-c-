#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int RaedTotalSaler()
{
    int total;

    cout << "Please enter a total sales?\n";
    cin >> total;



    return total;
}

float GetComissionPercentage(float total){

     if (total>= 1000000)
        return 0.01;
    else if (total>=500000)
        return 0.02;
    else if (total>=100000)
        return 0.03;
    else if (total>=50000)
        return 0.5;
    else 
        return 0.00;
    
}


float CalculeteTotalComision(float total)
{

  
    return GetComissionPercentage(total)*total;
    
}

int main()
{
    float total=RaedTotalSaler();

   cout<<endl<<"Comission Percentage = "<<GetComissionPercentage(total)<<endl;
   cout<<endl<<"Total comission = "<<CalculeteTotalComision(total)<<endl;
    return 0;
}