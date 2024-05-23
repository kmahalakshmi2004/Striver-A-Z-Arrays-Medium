//BRUTE FORCE APPROACH
#include<bits/stdc++.h>
using namespace std;

//MATRIX initialization is done with 2 vectors for rows and columns 
bool searchsorted(vector<vector<int>>&matrix,int target){
     int n=matrix.size();
     int m=matrix[0].size();
     //n is for the number of rows
     //m is for the number of columns
     //use a loop(say i) to select a particular row at a time
     //for every row, we will use another loop(say j) to traverse each column.
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               if(matrix[i][j]==target)
               return true;
          }
     }
     return false;
}
int main(){
     vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
     searchsorted(matrix,8) == true? cout<<"true\n":cout<<"false\n";
}



