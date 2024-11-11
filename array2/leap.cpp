#include<iostream>

using namespace std;


int main(){

    int start , end;
    int arr[100];
    cout << "start =" ;
    cin >> start;

    cout << "End =";
    cin >> end;
    int count=0;
    for( int i =start;i<= end;i++){
        if(i %4==0 ){
            arr[count] =i;
            cout << i << "  ";
            count ++ ;

        }
        
        
    }

} 