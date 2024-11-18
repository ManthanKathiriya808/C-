#include<iostream>

using namespace std;

int main(){

    int a[5]={1,2,3,4,5};

    int *ptr[5];

    for(int i =0;i<5;i++){
        ptr[i] = &a[i];
    }

    for (int i=0;i<5;i++){
        cout << "address : " << ptr[i] << " value : " << *ptr[i] <<endl;
    }

}