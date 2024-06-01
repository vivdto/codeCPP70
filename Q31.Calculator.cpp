#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    char operatorValue;
    cin>>operatorValue;
    
    switch (operatorValue)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
        cout<<a-b<<endl;
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