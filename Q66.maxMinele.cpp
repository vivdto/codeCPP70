#include<iostream>
using namespace std;

int main(){
    
    int num = 5; 
    int arr[num] = {10,20,30,40,50};
    
    int max = arr[0];
    int min = arr[num-1];
    
    for(int i = 0; i<num; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<" "<<min<<endl;
    
    return 0;
}