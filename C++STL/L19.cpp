/*#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[5]={2,5,1,6,4};

    array <int,4> a = {1,2,3,4};

    //Finding array size 
    int size = a.size();
    //Printing Array elements.
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2 index-> "<<a.at(2)<<endl;
    cout<<"Empty or not? "<<a.empty()<<endl;
    cout<<"First element-> "<<a.front()<<endl;
    cout<<"Last element-> "<<a.back()<<endl;
}*/

//Vector
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // Initially its size is 0.

    cout<<"Capacity-> "<<v.capacity()<<endl;

    //Adding element to the vector
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index is "<<v.at(2)<<endl;

    cout<<"First element-> "<<v.front()<<endl;

    cout<<"Last element-> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of vector before clearing-> "<<v.size()<<endl;
    v.clear();
    cout<<"Size of vector after clearing-> "<<v.size()<<endl;

    vector<int> a(5,1); // Another way initialising a vector.
    //Size of vector a is 5 and every element is 1
    cout<<"Vector a elements-> ";
    int size1=a.size();
    for(int i=0;i<size1;i++){
        cout<<a[i]<<" ";
    }
}*/


//Deque(Doubly Ended Que)
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // d.pop_back(); 
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Print element at first index-> "<<d.at(1)<<endl;

    cout<<"Front-> "<<d.front()<<endl;
    cout<<"Back-> "<<d.back()<<endl;
    cout<<"Empty or not-> "<<d.empty()<<endl;
    cout<<"Before erase size-> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size-> "<<d.size()<<endl;

}

