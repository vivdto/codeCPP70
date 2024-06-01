#include<iostream>
using namespace std;

int main(){
    
    int num = 5; 
    int arr[num];
    for(int i = 0; i<num; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<num; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}