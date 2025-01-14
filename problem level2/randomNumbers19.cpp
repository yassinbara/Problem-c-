#include<iostream>

// #include<random>
#include<cstdlib>
using namespace std;
int RandomNumber(int from, int To){
    int randNum =rand()% (To - from +1)+from;

    return randNum;
}

int main(){
    srand((unsigned)time(NULL));

    cout <<RandomNumber(1,10)<<endl;
    cout <<RandomNumber(1,10)<<endl;
    cout <<RandomNumber(1,10)<<endl;

    return 0;
}