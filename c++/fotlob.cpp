#include <iostream>
using namespace std;
int main()
{
  int arr[10]={34,35,24,321,4,35,343,12,13,42};
  int atetmant = 24;

 for (int i = 0; i <= 10; i++)
 {
    cout<<"we are at iteration"<<i + 1<<endl;
    if (atetmant == arr[i])
    {
        cout<<endl<<atetmant << "found at position"<< i <<endl;
        break;
    }

    cout<<"\n";
 }
 
  return 0;  
} 
