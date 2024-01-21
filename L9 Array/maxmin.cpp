#include<iostream>
using namespace std;
int getMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int num[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"Maximum element of array is: "<<getMax(num,n)<<endl;
   

}