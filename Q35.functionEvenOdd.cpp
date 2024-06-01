#include<iostream>
using namespace std;

int checkEven(int a){
    if(a%2==0)
    return true; 
    else
    return false;
}

int main(){
    int a;
    cin>>a;
    int ans = checkEven(a);

    cout<<ans<<endl;
    
    return 0;
}