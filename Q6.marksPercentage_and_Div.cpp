#include<iostream>
using namespace std;

int main(){
    
    int subMarks1, subMarks2, subMarks3, subMarks4, subMarks5; 
    cin>>subMarks1>>subMarks2>>subMarks3>>subMarks4>>subMarks5; 
    int sum = subMarks1+subMarks2+subMarks3+subMarks4+subMarks5; 
    int total = 500;
    float percentage = (sum/total)*100;
    
    if(percentage>=70)
    cout<<"1s Division"<<endl;
    
    else if(percentage>=50 && percentage<=60)
    cout<<"2nd Division"<<endl;
    
    else
    cout<<"3rd Division"<<endl;
    
    return 0;
}