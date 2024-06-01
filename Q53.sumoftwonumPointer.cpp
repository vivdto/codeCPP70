#include<iostream>
using namespace std;

int swap(int *a, int *b){
    return *a+*b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    int ans = swap(&a,&b);
    cout<<ans<<endl;
    
    return 0;
}