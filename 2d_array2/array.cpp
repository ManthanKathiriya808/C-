#include<iostream>

using namespace std;



int main(){


    int arr[4][4] = {
        {1,2,3,3},
        {4,5,6,7},
        {7,8,9,9},
        {7,8,9,9}};


    for (int i=0 ;i<4;i++){
        for(int j=0 ; j<4;j++){
            if(i ==0 || j==0 ||i==3 || j==3){
                cout << arr[i][j] << " ";
            }
            else{
                cout << "  ";
            }

        }
        cout << endl;
    }
    for (int i=0 ;i<4;i++){
        for(int j=0 ; j<4;j++){
            if(i ==j){
                cout << arr[i][j] << " ";
            }
            else{
                cout << "  ";
            }

        }
        cout << endl;
    }
    for (int i=0 ;i<4;i++){
        for(int j=0 ; j<4;j++){
            if(i+j==3){
                cout << arr[i][j] << " ";
            }
            else{
                cout << "  ";
            }

        }
        cout << endl;
    }


    // for(int i=0; i <r;i ++){
    //     for (int j=0;j<c;j++){
    //         cout << "arr[" << i <<"][" << j <<"] :";
    //         cin >> arr[i][j];
    //     }
    // }


    // for(int i=0 ; i<r;i++){
    //     for(int j=0;j <c; j++){
          
    //     }
    //     cout << endl;
    // }

    

}