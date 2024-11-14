#include<iostream>

using namespace std;

void add(int a,int b){
  
  cout << "sum is : " << a+b  << endl;
}
void mult(int a,int b){
  
  cout << "sum is : " << a*b  << endl;
}
void sub(int a,int b){
  
  cout << "sub is : " << a-b  << endl;
}
void divi(int a,int b){
  
  cout << "div is : " << a/b  << endl;
}

int main(){
 int a,b;
 cout << "Enter value of A : ";
 cin >> a;
 cout << "Enter value of b : ";
 cin >> b;

 add(a,b);
 mult(a,b);
 divi(a,b);
 sub(a,b);
}