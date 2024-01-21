//Finding the Pivot element of the array.
//Sorted & Rotated array.
// #include<iostream>
// using namespace std;
// int getPivot(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;

// }
// int main(){
//     int SNRarr[7]={12,34,45,69,3,7,11};
//     int pivot = getPivot(SNRarr,7);
//     cout<<"Pivot element index is "<<pivot<<" ."<<endl;
//     return 0;
// }

//Search in a Sorted N Rotated Array
/*
#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
            
        }
        else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int BinarySearch(int arr[],int s,int e,int k){
    int start = s;
    int end = e;
    int mid = start+(end - start)/2;
    while(start<=end){
        if(k == arr[mid]){
            return mid;
        }
        else if(k>arr[mid]){
            start = mid+1;
        }
        else if(k<arr[mid]){
            e = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;

}
int main(){
    int SNRarr[7]={12,34,46,68,6,9,11};
    int key;
    cout<<"Enter the element to search:- ";
    cin>>key;
    int pivot = getPivot(SNRarr,7);
    if(key>=SNRarr[pivot] && key<=SNRarr[6]){
        if(BinarySearch(SNRarr,pivot,6,key)!= -1){
            cout<<"Element found at "<<BinarySearch(SNRarr,pivot,6,key)<<" index."<<endl;
        }
        else{
            cout<<"Element not found."<<endl;
        }
    }
    else{
        if(BinarySearch(SNRarr,0,pivot-1,key)!= -1){
            cout<<"Element found at "<<BinarySearch(SNRarr,0,pivot-1,key)<<" index."<<endl;
        }
        else{
            cout<<"Element not found."<<endl;
        }
    }

    return 0;
}*/

//Finding Square Root of a Number using Binary Search
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int number){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        int m = mid*mid;
        if(m>number){
            e = mid-1;
        }
        else if(m<number){
            s = mid+1;
            ans = mid;
        }
        else{
            return mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}
int main(){
    int x;
    cout<<"\nEnter a positive Integer to find square root:- ";
    cin>>x;
    int arr[x+1];
    for(int i=0;i<x+1;i++){
        arr[i]=i;
    }
    int Sqrt = BinarySearch(arr,x+1,x);
    if(Sqrt == -1){
        cout<<"Square Root of number not found."<<endl;
    }
    else{
        cout<<"Square Root of number is "<<Sqrt<<" ."<<endl;
    }

    return 0;
}
