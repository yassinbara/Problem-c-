#include <iostream>
#include <cmath>

using namespace std;



void PrintWotrdsFromAAAtoZZZ()
{
 cout <<"\n";
 string word ="";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <=90; j++)
        {
            for (int a = 65; a <=90; a++)
            {
                word += char(i); 
                word += char(j) ;
                word += char(a) ;
                cout<<word<<endl;
                word ="";
            }
            
            
        }
        cout << endl;
    }
}

int main()
{

    PrintWotrdsFromAAAtoZZZ();
    return 0;
}