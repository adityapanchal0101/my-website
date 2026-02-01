#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter a number: ";
    cin>>n;

    if((n % 5 == 0  or n % 3 == 0) && (n % 15 != 0)){
        cout<<"this number is divisible by 5 or 3 but not divisible by 15 ";
    }

    else {
        cout<<"This number is divisible by 5 or 3 but also divisible by 15 ";
    }

}