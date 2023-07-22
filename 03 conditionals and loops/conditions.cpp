#include <iostream>
using namespace std;

int main(){
    int age = 18;

    // If else condition
    if (age>=18){
        cout << "Eligible to vote!" <<endl;
    }else{
        cout <<"Not eligible to vote!" <<endl;
    }

    // if-else-if

    int n;

    cout<<"Enter a number: "<<endl;
    cin >> n;
    // if (n == 1){
    //     cout << "Sunday"<<endl;
    // }else if(n==2){
    //     cout << "Monday"<<endl;
    // }else if(n==3){
    //     cout << "Tuesday"<<endl;
    // }else if(n==4){
    //     cout << "Wednesday"<<endl;
    // }else if(n==5){
    //     cout << "Thursday"<<endl;
    // }else if(n==6){
    //     cout << "Friday"<<endl;
    // }else if(n==7){
    //     cout << "Saturday"<<endl;
    // }else{
    //     cout << "Error" <<endl;
    // }

    // Switch 

    switch(n)
    {
        case 1:
            cout << "Sunday"<<endl;
            break;
        case 2:
            cout << "Monday"<<endl;
            break;
        case 3:
            cout << "Tuesday"<<endl;
            break;
        case 4:
            cout << "Wednesday"<<endl;
            break;
        case 5:
            cout << "Thursday"<<endl;
            break;
        case 6:
            cout << "Friday"<<endl;
            break;
        case 7:
            cout << "Saturday"<<endl;
            break;
        default:
            cout << "Error"<<endl;
            break;
    }

}