#include<iostream>
using namespace std;
int main(){
    int arr[10] = {23,39,47,122};
    cout<<"Address of first Memory Block is "<<arr<<endl;
    cout<<"Address of first Memory Block is "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<(*arr)<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    //New Concept
    int i = 2;
    cout<<i[arr]<<endl;

    return 0;
}