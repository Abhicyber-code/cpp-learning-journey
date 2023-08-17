#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initializing array
  vector<int> arr{1, 2, 3, 4, 5, 8, 7, 8};
  vector<int> brr{5, 6, 7, 8, 9, 5, 3, 8};
  vector<int> ans;

  // traversing each element to campare if its same or not..

  // outer for loop on arr
  for (int i = 0; i < arr.size(); i++) {

    // inner for loop on brr
    for (int j = 0; j < brr.size(); j++) {

      // if same, push that element to ans array
      if (arr[i] == brr[j]) {

        // to avoid repeat comparision initialize with INT_MIN
        arr[i] = INT8_MIN;
        
        // push element to ans array
        ans.push_back(brr[j]);
      }
    }
  }

  // printing array
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}