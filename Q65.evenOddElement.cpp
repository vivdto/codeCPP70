#include<iostream>
using namespace std;

int main(){
    
    int evenCount = 0;
    int oddCount = 0;
    
    int num = 5; 
    int arr[num] = {10,-2,-3,-1,4};
    
    
    for(int i = 0; i<num; i++)
    {
        if(arr[i]>0){
        evenCount+=1;
        }
        
        else
        oddCount+=1;
        
    }
    
    cout<<"Even:"<<evenCount<<" Odd:"<<oddCount<<endl;
    
    return 0;
}