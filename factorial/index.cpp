#include<iostream>

using namespace std;

int main(){

    

    cout << "enter number of factorial" << endl;
    int n;

    cin>> n;

    int i =1;
    int fact=1;

    while(i<=n){

        
        fact*=i;

        i++;
    }

    cout << "factorial is; " << fact;
    

}