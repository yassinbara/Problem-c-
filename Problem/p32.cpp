#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int RaedNumber()
{
    int num;

    cout << "Please enter a Number?\n";
    cin >> num;

    return num;
}

int ReadPower()
{
    int M;
    cout << "Please enter a Power?\n";

    cin >> M;
    
    return M;
}


float PowerOf2_3_4(int num, int M)
{

    if (M == 0)
    {
        return 1;
    }
    int P = 1;
    for (int i = 0; i < M; i++)
    {
        P = P * num;
    }
    return P;
}

int main()
{

   cout<< PowerOf2_3_4(RaedNumber(), ReadPower())<<endl;
    return 0;
}