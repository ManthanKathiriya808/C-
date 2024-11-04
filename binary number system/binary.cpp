#include<iostream>

using namespace std;


int decToBinary(int decNum){
    int ans =0;
    int power = 1;

    while(decNum >0){
        int reminder = decNum%2;
        decNum/=2;
        ans += (reminder *power);

        power*=10;

    }

    return ans;
}
int main(){
      
      for(int i =1 ;i<=10;i++){
        cout << decToBinary(i) << endl ;
      }

} 