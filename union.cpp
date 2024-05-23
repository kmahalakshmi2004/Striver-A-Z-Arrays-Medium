
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    // Function to return a list containing the union of the two arrays.
     vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
          set <int> unionset; //it automatically handles duplicates so set is used
          vector <int> unionvec; //this is the variable for storing
     //appending all the duplicates of the first array
     //Insert elements from arr1 into the set
         for(int i=0;i<n;i++){
          unionset.insert(arr1[i]);
     }
     //appending all the duplicates of the second array
     //Insert elements from arr2 into the set
         for(int i=0;i<m;i++){
          unionset.insert(arr2[i]);
     }
     // Convert set to vector
         for(auto it:unionset){
          unionvec.push_back(it)
     }
     return unionvec;
    }
};