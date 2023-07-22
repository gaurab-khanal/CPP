// types of loops
// while, do-while, for-loop, ranged loop

#include <iostream>
using namespace std;

int main(){
    int i= 1;
    // Print number from 1-10
    // WHile loop

    // while (i<=10){
    //     cout << i << endl;
    //     i++;
    // }

    // do-while loop

    // do{
    //     cout << i << endl;
    //     i++;
    // }while(i<=10);

    // for loop

    // for(i=1;i<=10;i++){
    //     cout << i << endl;
    // }

    // ranged based loop

    int num[] = {2,3,4,5,6,7,8,9};
    
    for(int i:num){
        cout << i << endl;
    }


}