#include <iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}
void ms(int arr[],int low,int high){
    if(low==high) return;
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);

}
void merge_sort(int arr[],int n){
    ms(arr,0,n-1);
    cout<<"The sorted array is-> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter the array size-> ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements-> ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,n);
    return 0;
}