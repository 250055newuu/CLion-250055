#include <iostream>
using namespace std;

int main() {
    int intNumber = 24;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout <<"value of integer number is: "<<intNumber<<" Size of it is "<< sizeof(intNumber)<< endl;
    cout <<"Value of integer number is: "<<doubleNumber<<" Size of it is "<< sizeof(doubleNumber)<< endl;
    cout <<"Value of integer number is: "<<boolean<<" Size of it is "<< sizeof(boolean)<<endl;
    cout <<"Value of integer number is: "<<charName<<" Size of it is "<< sizeof(charName)<<endl;
}

