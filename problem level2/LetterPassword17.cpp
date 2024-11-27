#include <iostream>
#include <cmath>

using namespace std;

string ReadLetterPassword(string message)
{
    string worde;
    cout << message << endl;
    cin >> worde;
    return worde;
}

 bool PrintLetterPassword(string worde)
{
    cout << "\n";
    string word = "";
    int countr =0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int a = 65; a <= 90; a++)
            {
                countr++;
                    word += char(i);
                    word += char(j);
                    word += char(a);
                cout <<"Trial ["<<countr<<"] : ";
                cout<<word<<endl;
                if ( word == worde)
                {
                    cout << "\nPassword is " << word << endl;
                    cout <<"Found after ";
                cout <<countr<<" Trial (s)\n";
                    return true;
                }
                word = "";
            }
        }
        cout << endl;
    }
    return false;
}

int main()
{

    PrintLetterPassword(ReadLetterPassword("Prease enter word Letter Password?"));
    return 0;
}