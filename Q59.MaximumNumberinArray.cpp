#include<iostream>
using namespace std;

int main(){
    
    int num = 5; 
    int arr[num] = {10,20,30,40,50};
    int max = arr[0];
    for(int i = 0; i<num; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    
    return 0;
}