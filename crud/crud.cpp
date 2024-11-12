#include<iostream>

using namespace std;

int main(){

    int size;
    cout <<  "Enter Size: " ;
    cin >> size;

    int a[size];

    for(int i=0;i<size;i++){
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl ;


    int value;

    do{
        
        cout << "Enter 1 for  Update" << endl;
        cout << "Enter 2 for  read" << endl;
        cout << "Enter 3 for  delete" << endl;
        cout << "Enter Value : "  ;
        cin >> value;
    cout << endl;


        switch (value)
        {
        case 1 :
            int index;
            cout << "Enter Index : " ;
            cin >> index;
            cout << "Enter number : ";
            cin >> a[index];
            cout << "Updated" << endl << endl;


            break;
        case 2 :
            for(int i =0 ;i <size;i ++ ){
                cout << a[i] << " , ";
            }
            cout << endl << endl;
            break;
         case 3: 
             int pos;
                cout << "enter pos: ";
                cin >> pos;

                for(int i=pos; i<size; i++){

                    a[i] = a[i+1];
                    cout << "deleted";
                } 
                 size--;
                cout << endl;

            break;
        default:
            cout << "Enter valid number" << endl;
        }


    }while(value!=0);
}