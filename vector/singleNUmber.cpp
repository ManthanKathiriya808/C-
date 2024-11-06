#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec ={1,1,2,2,3,4,3,4,5};
    int ans = 0;

    for ( int val: vec){
        ans^=val;

    }
 cout << ans;
   return 0;

} 