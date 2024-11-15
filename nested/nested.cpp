#include<iostream>

using namespace std;

void one();
void two();
void three();

void one(){
    cout << "I'm One" <<endl;
    two();
}

void two(){
    cout << "I'm Two" <<endl;
    three();
}

void three (){
    cout << "I'm Three" <<endl;
}


int main(){

    one();

}