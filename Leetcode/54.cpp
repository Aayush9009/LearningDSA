//Spiral Matrix
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int> >& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int startingCol = 0;
        int startingRow = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        int count = 0;
        int total = row*col;

        while(count<total){
            //Printing  First Row
            for(int index = startingCol; count<total && (index<=endingCol);index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            //Printing Last Column
            for(int index = startingRow;count<total && index<=endingRow;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            //Printing Last Row
            for(int index = endingCol; count<total && index>=startingCol;index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            //Printing First Column
            for(int index = endingRow; count<total && index>=startingRow;index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
}
int main(){

    vector<vector<int> > arr;
    int row ,col;
    cout<<"\nEnter the Dimensions of a 2D-Matrix-> ";
    cin>>row>>col;
    for(int i=0;i<row;i++){
        vector<int> v1;
        cout<<"Enter elements for "<<i+1<<" row."<<endl;
        for(int j=0;j<col;j++){
            int num;
            cin>>num;
            v1.push_back(num);
        }
        arr.push_back(v1);
    }
    cout<<"Printing the 2D-Matrix."<<endl;
    for (int i = 0; i < arr.size(); i++) { 
        for (int j = 0; j < arr[i].size(); j++) 
            cout << arr[i][j] << " "; 
        cout << endl; 
    } 
    
    cout<<"Printing Spiral Matrix."<<endl;
    vector<int> result = spiralOrder(arr);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
    return 0;

}