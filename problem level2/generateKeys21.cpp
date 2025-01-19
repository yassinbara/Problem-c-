#include <iostream>
#include <random>

using namespace std;
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};
int RandomNumber(int from, int To)

{
    int randNum = rand() % (To - from + 1) + from;

    return randNum;
};

char GetCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:

        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:

        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:

        return char(RandomNumber(33, 47));
    case enCharType::Digit:

        return char(RandomNumber(48, 57));

        break;
    }
    return char(RandomNumber(48, 57));
}
float ReadPositiveNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
string GenerateWord(enCharType CharType, short length)
{

    string word;
    for (int i = 0; i < length; i++)
    {
        word = word + GetCharacter(enCharType::CapitalLetter);
    }

    return word;
}
string GenerateKey()
{
    string key = "";
    key = GenerateWord(enCharType::CapitalLetter, 4) +"-";
    key = key+ GenerateWord(enCharType::CapitalLetter, 4) +"-";
    key =key+ GenerateWord(enCharType::CapitalLetter, 4) +"-";
    key =key+ GenerateWord(enCharType::CapitalLetter, 4) ;
 return key;
}
void GenerateKeys(int numberofkey)
{
    for (int i = 1; i <= numberofkey; i++)
    {

        cout << "key [" << i << "] : " 
             << GenerateKey()<< endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("please enter how many key to generate?"));

    return 0;
}