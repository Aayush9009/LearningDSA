#include<iostream>
using namespace std;
int main(){
    cout<<endl;
    cout<<"Enter the array to be sorted:- ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        //We consider i=0 element to be sorted.
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                //Ruk Jao
                break;
            }
        }
        arr[j+1]=temp;
    }
    
    cout<<"The sorted array is:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}