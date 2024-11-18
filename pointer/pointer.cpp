#include<iostream>

using namespace std;

int main(){

    int a=10,b=11;

    int *ptr = &a;
    int *ptr1 = &b;

    cout << ptr << endl;
    cout << ptr1 << endl;
}