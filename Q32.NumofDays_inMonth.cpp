#include<iostream>
using namespace std;

int main(){
    char month;
    cin>>month;
    
    switch (month)
    {
    case 'Jan':
        cout<<"31 Days" <<endl;
        break;

    case 'Feb':
        cout<<"28 Days"<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
        
    
    default:
    cout<<"INVALID";
        break;
    }
    return 0;
}