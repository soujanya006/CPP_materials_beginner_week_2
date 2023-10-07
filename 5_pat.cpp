#include<iostream>
using namespace std;

int main (){


    int n;
    cout<<"enter the row number";
    cin>>n;
    // for outter loop
    for(int row=0;row < n; row ++){
        //for the space 
        for(int col=0; col<n-row-1; col ++){
            cout<<"  ";
        }
        // for numbers
        for(int col =row +1; col>=1; col --){

            cout<<col<<" ";
        }
    cout<<endl;
    }

    for(int row= 0; row<n-1; row++){

        for(int col=0; col < row+1; col ++){
            cout<<"  ";
        }
        for(int col=n-row-1; col>=1; col --){
            cout<<col<<" ";
        }

    cout<<endl;
    }

    return 0;

}