#include<iostream>

using namespace std;

int main (){

    int a;
    int b;


    cout<< "menu"<< endl;
    cout << "enter 1 for pizza" << endl;
    cout << "enter 2 for burder" << endl;
    cout << "enter 3 for sub" << endl;
    cout << "enter 4 for pasta" << endl;

    cin >> a;

    if (a==1){
        cout << "You Ordered pizzzzaaaaaaa" << endl;
      cout<< "pizza type"<< endl;
    cout << "enter 1 for margirita" << endl;
    cout << "enter 2 for tandoori" << endl;
    cout << "enter 3 for 8 cheeze" << endl;
    cout << "enter 4 for spicy garlic " << endl;

    cin >> b;

    if(b==1){
            cout << "enter 1 for margirita" << endl;
    }

    else if(b==2){
              cout << "enter 2 for tandoori" << endl;
    }

    else if(b==3){
          cout << "enter 3 for 8 cheeze" << endl;
    }

    else if(b==4){
              cout << "enter 4 for spicy garlic " << endl;

    }

    }


    else if(a==2){
        cout << "burgger";
          cout<< "burder type"<< endl;
    cout << "enter 1 for sezwan" << endl;
    cout << "enter 2 for double tikke" << endl;
    cout << "enter 3 for Aloo Tikke" << endl;
    cout << "enter 4 for spicy mexican " << endl;

cin >> b;

    if(b==1){
            cout << "enter 1 for sezwan" << endl;
    }

   else  if(b==2){
              cout << "enter 2 for double tikee" << endl;
    }

   else  if(b==3){
          cout << "enter 3 for Aloo tikke" << endl;
    }

    else if(b==4){
              cout << "enter 4 for spicy mexican " << endl;

    }
    }

   else if(a==3){
        cout << "pasta";
          cout<< "pasta type"<< endl;
    cout << "enter 1 for red sauce" << endl;
    cout << "enter 2 for white sauce" << endl;
    cout << "enter 3 for italian style" << endl;
    cout << "enter 4 for spicy tricolor pasta " << endl;

    cin >> b;

    if(b==1){
            cout << "enter 1 for red sauce" << endl;
    }

    else if(b==2){
              cout << "enter 2 for white sauce" << endl;
    }

   else  if(b==3){
          cout << "enter 3 for italian" << endl;
    }

    else if(b==4){
              cout << "enter 4 for tricolor pasta " << endl;

    }
    }

   else if(a==4){
        cout << "sub";
          cout<< "sub type"<< endl;
    cout << "enter 1 for garlic bread" << endl;
    cout << "enter 2 for wheat breed" << endl;
    cout << "enter 3 for multi grain" << endl;
    cout << "enter 4 for corn breaad " << endl;

    cin >> b;

    if(b==1){
            cout << "enter 1 for garlic" << endl;
            
    }

   else  if(b==2){
              cout << "enter 2 for wheat bread" << endl;
    }

    else if(b==3){
          cout << "enter 3 for multi brad" << endl;
    }

    else if(b==4){
              cout << "enter 4 for corn bread " << endl;

    }
    }

else{
    cout << "no orsder found";
}
  
}
