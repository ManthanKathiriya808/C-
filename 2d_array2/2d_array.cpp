#include<iostream>

using namespace std;



int main(){

    int r,c;
    cout << "r : " ;
    cin >> r;
    cout << "c : " ;
    cin >> c;

    int arr[r][c],arr1[r][c],arr2[r][c];

    for(int i=0; i <r;i ++){
        for (int j=0;j<c;j++){
            cout << "arr[" << i <<"][" << j <<"] :";
            cin >> arr[i][j];
        }
    }
    for(int i=0; i <r;i ++){
        for (int j=0;j<c;j++){
            cout << "arr1[" << i <<"][" << j <<"] :";
            cin >> arr1[i][j];
        }
    }

    for(int i=0 ; i<r;i++){
        for(int j=0;j <c; j++){
            arr2[i][j] = arr[i][j] + arr1[i][j];
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    

}