#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
       sum=sum+arr[i];
    }
    cout<<endl;
    cout<<"Sum of elements of array is: "<<sum<<endl;
    return 0;
}
int main(){
    int num[5]={23,-39,43,3,9};
    sumofarray(num,5);
}