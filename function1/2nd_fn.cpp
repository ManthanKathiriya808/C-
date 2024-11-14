#include<iostream>

using namespace std;

int fun(){
    int a,b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter the value of B :" ;
    cin >> b;

    return a + b;
}

int main(){
 cout << fun();
}