#include <iostream>
#include<vector>
using namespace std;
int f(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low-1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}
void qs(int arr[],int low,int high){
    if(low<high){
        int partition = f(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
}
void quick_sort(int arr[],int n){
    qs(arr,0,n-1);
    cout<<"The sorted Array is-> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter the array size-> ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,n);
    return 0;
}