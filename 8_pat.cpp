#include<iostream>
using namespace std;

int main(){

    // 55555
    // 4444
    // 333
    // 22
    // 1

    int n;
    cout<<" enter the row number ";

    cin>>n;
    for(int row=0; row<n; row ++){

        for(int col=0; col<n-row;col ++){

            cout<<(n-row)<<" ";
        }
    cout<<endl;
    }

    for(int row=0;row<n-1;row++){
        for(int col=0;col<row+2;col ++){
            cout<<row+2<<" ";
        }
    cout<<endl;
    }

    return 0;

}