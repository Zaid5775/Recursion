#include<iostream>
using namespace std;

void sort(int arr[], int n){
   
    if(n == 0 || n==1){
        return ;
    }

    for(int i=0; i<n-1; i++){
        
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

      sort(arr, n-1);





}

int main(){
 int arr[7] = {4,88,70,2,7,9,10};
 int n=7;
 cout<< "Befor: ";
 for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
 }
cout<< endl;
 sort(arr, 7);
 cout<< "After: ";  for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
 }



    return 0;
}