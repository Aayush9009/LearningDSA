#include<iostream>
#include<fstream>

/*Useful Classes for working with files in C++:-
1:- fstreambase
2:- ifstream --> Derived class of fstreambase.
3:- ofstream
In order to work with files in c++ , you will have to open it. Primarly there are
2 ways to open a file:
1:- Using the constructor
2:- Using the member function open() of the class
*/
using namespace std;
int main(){
    // string str = "Aayush Bhai";
    // string str1;
    // //Opening File using constructor and Writing it.
    // // ofstream out("SampleFile.txt");//Write Operation
    // // out<<str;

    // //Opening a a file using constructor and reading it.
    // ifstream in("SampleFileb.txt");//Read Operation
    // //in>>str1;
    // getline(in,str1);
    // cout<<str1;
    string str = "This is a new file";
    string str1;

    ofstream out("SampleFileb.txt");//Write Operation
    out<<str;

    ifstream in("SampleFile.txt");//Read Operation
    //in>>str1;(Only reads the first string of a line)
    getline(in,str1);
    cout<<str1;

    return 0;
}
