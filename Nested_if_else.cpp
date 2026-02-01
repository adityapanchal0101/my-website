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

    if(a>b){
        if(a>c){
            cout<<a<<" is greater";
        }
        else {
            cout<<c<<" is greater";
        }
    }
    
    else{
        if(b>a)
            if(b>c){
                cout<<b<<" is greater";
            }
            else{
                cout<<c<<" is greatest";
            }

    }


}