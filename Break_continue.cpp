#include<iostream>
using namespace std;

int main(){


    for(int i=0; i<5;i++){
        cout<<i<<endl;
        if(i==3){
            break;
        }
    }


    cout<<"_____________________________________";

    cout<<endl;
    cout<<endl;
    for(int i=0; i<5;i++){

        cout<<" hello"<<endl;
        continue;
        cout<<" not hello "<< endl;
        
    }

    return 0;

}