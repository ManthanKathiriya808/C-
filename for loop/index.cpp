#include<iostream>

using namespace std;

int main(){

    cout << " for loop" << endl << endl;

    for( int i=0; i<10;i++){
        cout << i << endl;
    }


    cout << " reverse" << endl <<endl;

    for( int i=10; i>0;i--){
        cout << i <<endl;
    }

    cout << " for odd numbers" << endl <<endl;


    for(int a=1 ; a<=100; a++){

        if(a%2==0){
            cout << a << " " ;
        }
    }

int c=0;

    for( int j=0 ; j<10; j++){
        c+=j;
    

    }

    cout << c<< "";

}
