#include<iostream>

using namespace std;



int main(){


    int arr[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}};

    int size= sizeof(arr)/4;

  
    
    int sum = 0;

    for(int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            sum +=arr[i][j];
        }
    }

    int avg= sum/size;
    cout <<avg;

    cout << avg;
}