#include<iostream>
using namespace std;

class Student{
    public:
    int roll_no;
    string name;

    public:
    void setroll(int x){
        roll_no = x;
        cout<<roll_no<<endl;
    }
    void setname(string s){
        name = s;
        cout<<name<<endl;
    }
};
class Test{

    public:
    int arr[5];

    void input(){
        cout<<"Enter the marks."<<endl;
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
};
class result:public Student, public Test{
    public:
    void Display(){
        cout<<"Name : "<<name<<" Roll No. "<<roll_no<<endl;
    }


    
};
int main(){
    cout<<endl;
    Student s1;
    s1.setroll(2);
    s1.setname("Aayush");
    Test t1;
    t1.input();
    result r1;
    // r1.calculate();
    r1.Display();
    cout<<endl;

    return 0;
}