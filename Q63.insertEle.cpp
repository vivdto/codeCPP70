#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int num = 5; 
    int arr[num] = {10,-2,-3,-1};
    
    for(int i = 4; i<num; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}