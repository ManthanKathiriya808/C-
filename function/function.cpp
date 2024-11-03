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

// int changeX(int x){
//     x = 2*x;
//     cout << "x = " << x << endl;
// }

int sumOfDigit(int n){

    int sum=0;
    
    while(n >0){
        int lastDigit = n%10;
        n/=10;
        sum+=lastDigit;
    }

    return sum;
}

int main(){
    // cout << sum(10,5);
    // cout << minOfTwo(5,4);
   cout << sumOfDigit(12345);
    return 0;
}