#include <iostream>
using namespace std;

int main(){

    int score = 200;
    int *myP = &score;

    cout <<"Value of score is " << score <<endl;
    cout <<"Value of pointer address is " << myP <<endl;

    // references

    int &another_score = score;
    another_score = 800;

     cout <<"Value of score is " << score <<endl;
    cout <<"Value of pointer address is " << myP <<endl;


    return 0;
}