#include<iostream>
using namespace std;

// int main(){
//     int a=0,b=0;
//     int N,M;
//     for(int i=0;i<N;i++){
//         a += rand();          //0(n) Time complexity for this loop
//     }
//     for(int i=0;i<M;i++){
//         b += rand();         //0(m) Time complexity for this loop
//     }
//      // Total time complexity is 0(n+m) SINCE it is not nested loop.
// }

int main(){
    int a=0,b=0;
    int N,k;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            a +=j;               //0(n^2) is Time complexity of this nested for loop.
        }
    }
    for(k=0;k<N;k++){
        b +=k;                 //0(n) . is Time complexity of this for loop.
    }
    //Total Time complexity is 0(n^2).

}