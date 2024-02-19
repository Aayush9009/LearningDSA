#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5]={64,25,12,22,11};
    for(int i=0;i<4;i++){
        int minindex=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    cout<<"Sorted Array obtained is :- ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}