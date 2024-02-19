#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the array to be sorted:- ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Bubble Sort Algorithm
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<(n-i);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    cout<<endl;
    cout<<"The sorted array is:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}