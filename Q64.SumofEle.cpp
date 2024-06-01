#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int num = 5; 
    int arr[num] = {10,-2,-3,-1,4};
    
    
    for(int i = 0; i<num; i++){
        sum = sum+arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<sum<<endl;
    
    return 0;
}