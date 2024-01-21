#include<iostream>
using namespace std;
// Reverse Array using Another Array
/*
int main(){
    int arr[5]={2,3,4,5,6};
    int revArr[5];
    for(int i=0;i<5;i++){
        revArr[i]=arr[4-i];
    }
    cout<<"Print reverse array: "<<endl;
    for(int j=0;j<5;j++){
        cout<<revArr[j]<<" ";
    }
}*/

//Using InBuilt Function swap
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        --end;
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[5]={34,-24,4,98,6};
    reverse(arr,5);
    printarray(arr,5);

}










