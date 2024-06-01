#include<iostream>
using namespace std;
int main(){
    int sum = 0; 
    int digit = 0; 
    
    int num; 
    cin>>num;
    
    int temp; 
    temp = num; 
    while(temp != 0){
        digit = temp % 10;
        sum += digit;
        
        temp /=10;
    }
    cout<<sum<<endl;
    return 0;
}