#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl;
    cout<<"Entered into update function: "<<endl;
    //UPDATING ARRAY
    arr[0]=120;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function: "<<endl;
    
}
int main(){
    int arr[3]={2,4,6};   
    update(arr,3);

    cout<<"Printing the elements of array in main function: "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}