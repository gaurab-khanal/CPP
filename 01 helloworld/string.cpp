#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string firstName, lastName;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Full name = " << firstName + " "+ lastName << endl;
    return  0;
}