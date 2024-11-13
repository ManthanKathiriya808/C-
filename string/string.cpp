#include<iostream>
#include<string>

using namespace std;

int main(){

    string str ;
   
    cout << " Enter Your String : ";
    cin >> str;
   
    int strlen = str.length();
    string str2;

    for(int i =strlen-1; i>=0;i--){
        str2= str2+str[i];
    }

    
    if(str == str2){
        cout << "The Given Word Is pallendrom";
    }

    else{
        cout << "The given Word is Not Pallenndrom";
    }

    
   


}