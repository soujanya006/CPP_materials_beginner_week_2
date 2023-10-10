#include<iostream>
#include <cmath>  // Include this
using namespace std;

int main(){

    int n;
    cout<<" enter the numbr ";
    cin>>n;
    int ans=0;

    for(int i=0; i<=30;i++){

        ans= pow(2,i);
        if (ans==n){
            cout<<"yes ";
            break;
        }
        else{
            cout<<"no: ";

        }
    }


    return 0;

}