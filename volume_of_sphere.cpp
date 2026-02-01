#include <iostream>
using namespace std;
int main(){
    float r , V ;

    //radius input by cin object 
    cout<<"Enter a radius : ";
    cin>>r;


    V = (4.0/3.0) * 3.14 * r * r * r;
    cout<<"volume of sphere is : ";
    cout<<V; 


    return 0;
}