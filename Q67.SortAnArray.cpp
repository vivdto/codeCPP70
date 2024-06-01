#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num = 5; 
    int arr[num] = {50,70,30,20,5};
    sort(arr, arr + num);
    for(int i = 0; i<num; i++){
    cout<<arr[i]<<" ";
    }
    
    return 0;
}