#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    cin>>temp;

    temp = a; 
    a = b; 
    b = temp;

    cout<<a<<b<<endl;
    
    return 0;
}