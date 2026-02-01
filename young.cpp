#include <iostream>
using namespace std;
int main(){
    int ram,shyam,mohan;

    cout<<"Enter age of ram : ";
    cin>>ram;

    cout<<"Enter age of shyam: ";
    cin>>shyam;

    cout<<"Enter age of mohan : ";
    cin>>mohan;

    if(ram<shyam){
        if(ram<mohan){
            cout<<"Ram is youngest";
        }
        else {
           cout<<"mohan is youngest";
        }
    }
    
    else{
        if(shyam<ram)
            if(shyam<mohan){
                cout<<"shyam is youngest";
            }
            else{
                cout<<"mohan is youngest";
            }

    }


}