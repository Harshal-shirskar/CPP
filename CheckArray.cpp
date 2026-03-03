#include<iostream>
using namespace std;

int main(){
    int arr[]={60,10,30,40,50};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            cout<<"given array is not sorted";
            break;
        }
         else{
            cout<<"given array is sorted";
            break;
         }
    }

    
    
    return 0;
}