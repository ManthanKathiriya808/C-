#include<iostream>

using namespace std;

int main(){

    int a=10;
    int b = 20;
    int c=5;

    if(a>b){
        if(a > c){
            cout << "a is greater"; 
        }

        else{
            cout <<  "value C is greater";
        }
    }

       if( b>a){
            if(b> c){
                cout << "value b is greater";
            }
            else{
                cout << "c is greater";
            }

        }
}