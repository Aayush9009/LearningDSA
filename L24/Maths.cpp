#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }   
    }
    return true;
}
int main(){
    cout<<"Enter an integer to check whether it is Prime or not"<<endl;
    int x;
    cin>>x;
    if(isPrime(x)){
        cout<<"It is a Prime Number."<<endl;
    }
    else{
        cout<<"It is not a Prime Number."<<endl;
    }
    return 0;    
}