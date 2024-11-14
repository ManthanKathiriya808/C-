#include<iostream>
#include<string>
using namespace std;

int fact(int factorial){
   
int count=1;
   for(int i=factorial;i>0 ;i--){
    count = count * i;
   }

   return count;
}


string isPrime(int factorial){

    int count =0;
    for(int i=2;i<factorial;i++){

        if(factorial %i ==0){
            count ++;
        }

    }

    if (count != 0){
        return "this is not prime";
    }

    else{
        return "prime";
    }
}

int main(){
    int factorial;
    cout << "Enter number : ";
    cin >> factorial;
    // cout << factorial;
    cout << fact(factorial) << endl;
    cout << isPrime(factorial);


}