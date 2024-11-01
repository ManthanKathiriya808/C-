#include<iostream>

using namespace std;

int main(){

   int i=2;
   bool prime =true;
    int n=10;
   while (i<=n-1){
        if(n%i==0){
           prime=false;
           break;
        }

        i++;
   }

}
