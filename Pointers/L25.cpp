#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;

    //Address of Num
    cout<<"Address of Num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"Value of num "<<(*ptr)<<endl;
    cout<<"Address of num "<<(ptr)<<endl;

    double d = 3.43;
    double *p = &d;
    cout<<"\nValue of d "<<(*p)<<endl;
    cout<<"Address of d "<<(p)<<endl;

    //Another way of declaring the pointer

    char ch = 'A';
    char *c = 0;
    c = &ch;

    cout<<"\nValue is "<<*c<<endl;
    cout<<"Address is "<<c<<endl;
 

    //copying a Pointer
    int num1 = 7;
    int *p1 = &num1;
    cout<<"\nValue is "<<*p1<<endl;
    cout<<"Address is "<<p1<<endl;

    int *q = p1;
    cout<<p1<<" - "<<*p1<<endl;
    cout<<q<<" - "<<*q<<endl;

    //Important concept
    p++;
    cout<<p<<endl;
}