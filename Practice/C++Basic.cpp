#include<iostream>
using namespace std;

// void BinearySearch(int arr[],int key){
    
//     int start = 0;
//     int end = 9;
//     int mid = start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             cout<<arr[mid]<<" found at "<<mid<<"th position of array."<<endl;
//             break;
//         }
//         else if(arr[mid]<key){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
    
// }
// int main(){
    
    // for(int i=0;i<4;i++){
        
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Print Fibonacci Series.
    /*
    int n;
    cout<<"Enter the number of digits you want in Fibonnaci Series."<<endl;
    cin>>n;
    int i=0;
    int j=1;
    cout<<i<<" ";
    cout<<j<<" ";
    for(int k=0;k<n-2;k++){
        int nextNumber = i+j;
        cout<<nextNumber<<" ";
        i = j;
        j = nextNumber;
    }*/
    //Bineary Search
//     int arr[10]={9,11,15,24,31,39,41,47,51,89};
//     int search;
//     cout<<"Enter the element to search: ";
//     cin>>search;
//     BinearySearch(arr,search);
    
//     return 0;
// }
int firstOcc(int arr[],int size,int key){
    int ans;
    int s = 0;
    int e = size-1 ;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int LastOcc(int arr[],int size,int key){
    int ans;
    int s = 0;
    int e = size-1 ;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[9]={2,4,5,5,7,8,8,8,8};
    int FirstValue=firstOcc(even,9,8);
    int LastValue=LastOcc(even,9,8);
    int Total = (LastValue-FirstValue)+1;
    cout<<"First Occurrenece of 8 is "<<FirstValue<<" ."<<endl;
    cout<<"Last Occurrenece of 8 is "<<LastValue<<" ."<<endl;
    cout<<"Total occurrence of 8 in the given array is "<<Total<<" ."<<endl;
    return 0;
}