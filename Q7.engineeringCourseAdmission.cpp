#include<iostream>
using namespace std;

int main(){
    int candiateAge;
    cin>>candiateAge;
    if(candiateAge<18){
        cout<<"You're Not Eligible"<<endl;

    }
    else
    cout<<"Congratulations!"<<endl;

    return 0;
}