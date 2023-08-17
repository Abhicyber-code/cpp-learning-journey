#include <iostream>
#include <vector>
using namespace std;

int main() {

  // array 1

  vector<int> arr{ 4, 5, 7, 8, 6, 8};

  // array 2

  vector<int> brr{9, 6, 7, 2, 3, 8};

  // empty array to store sum of 2 arrays

  vector<int> arrsum;

  // putting all elements from arr to arrsum

  for (int i = 0; i < arr.size(); i++) {
    arrsum.push_back(arr[i]);
  }

  // putting all elements from brr to arrsum

  for (int i = 0; i < brr.size(); i++) {
    arrsum.push_back(brr[i]);
  }

  // printing arrsum

  for (int i = 0; i < arrsum.size(); i++) {
    cout << arrsum[i] << " ";
  }

  return 0;
}