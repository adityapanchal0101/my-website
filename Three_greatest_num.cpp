#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a first number : ";
    cin>>a;

    cout<<"Enter a second number : ";
    cin>>b;

    cout<<"Enter a Third number : ";
    cin>>c;

    if(a>b && a>c){
        cout<<"First number is greater";
    }

    else if (b>a && b>c){
        cout<<"Second number is greater";
    }

    else {
        cout<<"Third number is greater";
    }
    



}