#include <iostream>
using namespace std;

int main(){

    int integer[4] = {1,2,3,4};
    cout << integer<< endl; // memory address of 1st element
    cout << *integer<< endl; // 1st element = 1
    *integer = 99;
    cout << integer[0]<<endl; // 99

    int *ip = integer;
    ip++; // memory address increment by 1
    *ip = 209;
    cout << integer[1]<<endl;


    return 0;
}