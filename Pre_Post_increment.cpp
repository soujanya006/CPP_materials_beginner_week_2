#include<iostream>
using namespace std;

int main(){
    int a=8;
    cout<<++a<<endl;


    int b=8;
    cout<<b++<<endl;

    int ac=8;
    cout<<--a<<endl;

    
    int d=8;
    cout<<b--<<endl;

    int p=10;

    cout<<((p++)*(++p))<<endl; //10 *12



    int q=10;
    cout<<((q++)*(q++))<<endl;  // 10 * 11




    int w=10;
    cout<<((++w)*(w++))<<endl;  // 11 * 11




    int du=10;
    cout<<((++du)*(++du))<<endl;  // 11 * 12


    return 0;

}