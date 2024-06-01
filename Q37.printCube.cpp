#include<iostream>
using namespace std;

int printCube(int num){
    return num*num*num;
}

int main(){
    int num;
    cin>>num;
    int ans = printCube(num);
    cout<<ans<<endl;
    
    return 0;
}