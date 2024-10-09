#include<iostream>

using namespace std;


int main(){

    int a=0;
    int b=0;
    int c=10;

    while(a<10){
        cout << a << endl ;

        a++;
    }


    do{
        cout << b << endl;

        b++;
    }while(b<10);


    (c>18)? cout << "he can vote" : cout << "noobs";

}