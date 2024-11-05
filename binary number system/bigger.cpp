#include<iostream>

using namespace std;


int main(){

        int num[] ={ 5,15,22,1,4,55};
        int size = 6;

        int maxi = INT64_MIN;

        for(int i =0; i<size;i ++){
            maxi = max(num[i],maxi);
        }

    cout << maxi;
return 0;

} 