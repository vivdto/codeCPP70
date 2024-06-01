#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int num = 5; 
    int arr[num] = {10,-2,-3,-1,50};

    for(int i = 0; i<num; i++){
        if(arr[i]<0)
        
        count = count+1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Count : "<<count<<" ";


    return 0;
}