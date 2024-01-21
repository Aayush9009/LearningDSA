#include<iostream>
using namespace std;
/*
// int BinarySearch(int arr[],int size,int key){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(key>arr[mid]){
//             start=mid+1;

//         }
//         else{
//             end=mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int Even[6]={2,4,6,8,12,18};
//     int odd[5]={3,8,11,14,16};

//     int index=BinarySearch(Even,6,18);
//     cout<<index<<endl;

// }

//CODESTUDIO PROBLEM 
int Firstocc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
          ans = mid;
          end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans ;


}

int Lastocc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;

    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
          ans = mid;
          start = mid+1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans ;

}
// int FirstandLastPosition(int arr[],int n,int k){
//     pair<int,int> p;
//     p.first = Firstocc(arr,n,k);
//     p.second = Lastocc(arr,n,k);

//     return p;

// }
int main(){
    int Even[4]={0,1,1,5};
    int odd[7]={2,3,5,6,7,9,9};
    // cout<<endl;
    // cout<<"First occurence of 5 in Even array is at Index:- "<<Firstocc(Even,4,5)<<endl;
    // cout<<endl;
    // cout<<"First and Last occurence of 9 in Odd array is at Index:- "<<Firstocc(odd,7,9)<<" "<<Lastocc(odd,7,9)<<endl;
    pair<int,int> p;
    p.first = Firstocc(odd,7,9);
    p.second = Lastocc(odd,7,9);
    cout<< p.first <<" "<<p.second <<endl;

    return 0;
}*/

int main(){
    int arr[5]={2,4,8,5,3};
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end=mid;
        }
        mid = start + (end-start)/2;
    }
    cout<<"Peak element is "<<arr[start]<<endl;

}


