#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int j=x;
    int sum=0;
    while(x!=0){
        int n = x%10;
        int cube = n*n*n;
        sum += cube;
        x /= 10;
    }
    cout<<"Sum = "<<sum<<endl;
    if(sum==j){
        cout<<j<<" is Armstrong number."<<endl;

    }
    else{
        cout<<j<<" is not Armstrong number."<<endl;

    }
    return 0;
}