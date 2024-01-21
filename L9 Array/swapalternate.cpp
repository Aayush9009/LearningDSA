#include<iostream>
//GOOD APPROACH
/*
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={5,4,3,2,1};
    swapalternate(even,8);
    printarray(even,8);
    cout<<endl;
    swapalternate(odd,5);
    printarray(odd,5);

}
*/

using namespace std;
//Swap Alternate numbers.
int main()
{
    int temp;
    int arr[7]={1,2,3,4,5,6,8};
    for(int i=0;i<6;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    cout<<"Print reversed array: "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}