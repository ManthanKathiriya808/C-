#include<iostream>
#include<vector>
using namespace std;


int main(){

   vector<int> vec ;
    
    cout << "size =" << vec.size()  << endl;
    vec.push_back(355);
    vec.push_back(5);
    vec.push_back(65);
    vec.push_back(85);
    vec.push_back(1);
    vec.push_back(23);
        cout << "size =" << vec.size()  << endl;

    vec.pop_back();
     cout << "size =" << vec.size()  << endl;


    cout << vec.front() << endl;
    cout << vec.back() << endl;


    cout << vec.at(3);
//    for (int i : vec){    // for each loops   
//     cout << i << endl;
//    }
    return 0;

} 