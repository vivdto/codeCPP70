#include<iostream>
using namespace std; 

float areaOfCircle(float pi, int r){
    return pi*r*r;
}
float circumference(float pi, int r){
    return 2*pi*r;
}

int main(){
    int r;
    float pi;
    
    pi = 3.14;
    cin>>r; 
    
    float area = areaOfCircle(pi,r);
    float circum = circumference(pi, r);
    
    cout<<area<<endl<<circum<<endl;
    
    return 0;
}