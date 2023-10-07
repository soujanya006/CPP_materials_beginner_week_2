//               a
//             a b a
//           a b c b a
//         a b c d c b a
//       a b c d e d c b a
//     a b c d e f e d c b a
//   a b c d e f g f e d c b a
// a b c d e f g h g f e d c b a


#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"enter the number of rows";
    cin>>n;

    for (int row=0;row <n; row ++){

        for(int col =0; col <n-row-1; col ++){
            cout<<"  ";
        }
        for(char ch = 'A'; ch < 'A' + row; ch ++ ){
            cout<<ch<<" ";

        }
        // Printing decreasing characters
        for (char ch1='A' + row - 2; ch1 >= 'A'; ch1--){
            cout<<ch1<<" ";
        }
    cout<<endl;
    }
    return 0;
}