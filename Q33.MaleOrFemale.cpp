#include<iostream>
using namespace std;

int main(){
    char M, F;
    char Value;
    cin>>Value;

    switch(Value){
        case 'M':
        case 'm':
        
            cout<<"Male"<<endl;
            break;
        
        case 'F':
        case 'f':
        
            cout<<"Female"<<endl;
            break;
            
        default:
        cout<<"Invalid"<<endl;
    }
   
        return 0;
}