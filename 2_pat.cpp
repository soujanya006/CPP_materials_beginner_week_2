#include<iostream>
using namespace std;

int main(){


//    1
//   121
//  12321
// 1234321

// For i from 1 to 4
//     For j from i to 3
//         Print space
//     End Loop
//     For j from 1 to i
//         Print j
//     End Loop
//     For j from i-1 to 1
//         Print j
//     End Loop
//     Print newline
// End Loop

    int n;
    cout<<"enter the number of rows :";
    cin>>n;
    
    //outter loop 
    for(int row=0;row<n;row++){
        //inner loop for space 
        for(int col=0;col<n-row-1;col++){

            cout<<"_ ";
        }
        // for the numerical part-1
        for(int col=1;col <=row+1;col++){
            cout<<" "<<col;
        }
        for(int col=row;col >=1;col--){
            cout<<" "<<col;
        }
    cout<<endl;
    }
    return 0;

}