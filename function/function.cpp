#include<iostream>
using namespace std;


// int sum(int a, int b){
//     int s= a+b;
//     return s;
// }

// int minOfTwo(int a , int b){
//     if(a< b ){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

int changeX(int x){
    x = 2*x;
    cout << "x = " << x << endl;
}

int main(){
    // cout << sum(10,5);
    // cout << minOfTwo(5,4);
    int x = 5;
    changeX(x);
    cout << "x = " << x ;
    return 0;
}