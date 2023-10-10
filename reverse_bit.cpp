#include<iostream>
using namespace std;

int main(){

// This code is designed to compute the bitwise "NOT" of a number, while 
// preserving the number of bits in the original number. To achieve this, the 
// code creates a mask that's the same length as the number n (in terms of bits).


    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int m=n;
    int mask=0;

    if (n==0){
        cout<<1<<endl;

    }
    else{
        while(m!=0){
            mask=(mask<<1) | 1;
            m=m>>1;
    }
    int ans =(~n) & mask;
    cout<<ans;

    }


    return 0;

}