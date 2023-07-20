#include <iostream>
using namespace std;

int main(){

    int card;
    card = 40;
    int myCard = card;

    int *myP;
    myP = &card;
    int val = *myP;
    cout << "myP: " << myP;
    cout << "\nValue of myP: " << val;

    return 0;
}