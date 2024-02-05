#include <iostream>
#include <vector>

using namespace std;

int duplicateRemover(vector<int>& array) {
  
    int i = 0; 
    for (int k = 1; k < array.size(); ++k) 
    {
        if (array[k] != array[i]) { 
            ++i; 
            array[i] = array[k];
        }
    }
    return i + 1; 
}

int main() {
    vector<int> array = {1, 1, 2, 2, 3, 4, 4, 5, 5}; 
    int newLength = duplicateRemover(array); 
    cout << "Length of new array: " << newLength << endl;
   
return 0;
}