// #include<iostream>
// #include<array>
// using namespace std;
// int main(){

//     array<int,5> a ={2,3,4,5,6};

//     for(int i=0;i<5;i++){
//         cout<<endl;
//         cout<<a[i]<<" ";
//     }
//     cout<<"\nElement at index 2 is "<<a.at(2)<<endl;
//     cout<<"Empty or not->"<<a.empty()<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// try {
// int age;
// cin>>age;
// if (age >= 18) {
// cout << "Access granted - you are old enough to VOTE.";
// } else {
// throw (age);
// }
// }
// catch (int myNum) {
// cout << "Access denied - You must be at least 18 years old to VOTE.\n";
// cout << "Age is: " << myNum;
// }
// }

// #include <iostream>
// using namespace std;
// int main() {
// double numerator, denominator, divide;
// cout << "Enter numerator: ";
// cin >> numerator;
// cout << "Enter denominator: ";
// cin >> denominator;
// try {
// // throw an exception if denominator is 0
// if (denominator == 0)
// throw 0;
// // not executed if denominator is 0
// divide = numerator / denominator;
// cout << numerator << " / " << denominator << " = " << divide << endl;
// }
// catch (int num_exception) {
// cout << "Error: Cannot divide by " << num_exception << endl;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to calculate the Factorial."<<endl;
    cin>>n;
    try{
        if(n<0){
            throw(0);
        }
        else if(n==0){
            cout<<"Factorial of 0 is 1"<<endl;
        }
        else{
            int product=1;
            for(int i=1;i<=n;i++){
                product*=i;
            }
            cout<<"Factorial of "<<n<<" is "<<product<<endl;
            }
    }
    catch(int NegativeNumberException){
        cout<<"Error 420: You entered a negative number."<<endl;
    }
    
    return 0;

}