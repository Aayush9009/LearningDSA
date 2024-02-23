#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int ans[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    //Copy krdo First Array K remaining elements ko
    while(i<n){
        ans[k]=arr1[i];
        k++;
        i++;
    }
    //Copy krdo Second Array K remaining elements ko
    while(j<m){
        ans[k]=arr2[j];
        j++;
        k++;
    }
    
}
void print(int arr[],int n){
    cout<<"Printing the merge sorted array:- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int ans[8];
    merge(arr1,5,arr2,3,ans);
    print(ans,8);
     
    return 0;
}