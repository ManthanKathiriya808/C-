#include<iostream>

using namespace std;

int main(){

    int a=1234;

    int ld= a%10;



    while(a>=10){
        
        a=a/10;

    }

    cout<< a+ld;
}