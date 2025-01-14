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
int RandomNumber(int from, int To){
    int randNum =rand()% (To - from +1)+from;

    return randNum;
};

 char GetCharacter (enCharType CharType){
    switch (CharType)
    {
    case enCharType::SmallLetter:

        return char(RandomNumber(97,122));
    case enCharType::CapitalLetter:

        return char(RandomNumber(65,90));
    case enCharType::SpecialCharacter:

        return char(RandomNumber(33,47));
    case enCharType::Digit:

        return char(RandomNumber(48,57));

        break;
    }
    return char(RandomNumber(48,57));
}


int main()
{
    srand((unsigned)time(NULL));

    cout<<GetCharacter(enCharType::CapitalLetter)<<endl
        <<GetCharacter(enCharType::Digit)<<endl
        <<GetCharacter(enCharType::SmallLetter)<<endl
        <<GetCharacter(enCharType::SpecialCharacter)<<endl;
    return 0;
}