#include<iostream>

using namespace std;


void changeArr (int arr[] ,int size){

    cout << "in function";
    for(int i =0; i <size;i++){
        arr[i]*= 2;
    }

}

int main(){
    int arr[]= {1,2,3,4};

    changeArr(arr, 4);

    cout << "in main " << endl;

    for (int i =0 ; i <4; i ++) {
        cout << arr[i] << endl;
    }



return 0;

} 