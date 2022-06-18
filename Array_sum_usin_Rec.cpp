#include<iostream>
using namespace std;

sum(int arr[], int n){
    if(n <= 0 ){
        return 0;
    }

    return (sum(arr ,  n-1) + arr[n-1]);
}

int main(){

int arr[5] = {3,5,2,6,1};
int n = 5;


cout<< sum(arr, n) << endl;





    return 0;
}