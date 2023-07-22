#include <iostream>
using namespace std;

int main(){

    int score = 200;
    int *myP = &score;

    cout <<"Value of score is " << score <<endl; //200
    cout <<"Value of pointer address is " << myP <<endl; //200

    // references

    int &another_score = score; // score address is assigned
    another_score = 800;

     cout <<"Value of score is " << score <<endl; // 800
    cout <<"Value of pointer address is " << myP <<endl; 


    return 0;
}