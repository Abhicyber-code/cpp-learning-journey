#include <iostream>
using namespace std;

// function created

int binarysearch(int arr[], int key, int size) {
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (key < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    // every time find mid after loop
    mid = (start + end) / 2;
  }
//   element not found return -1
  return -1;
}
int main() {

  int arr[] = {10,20,30,40,45,50,60,65,70,80,90};

//   elements in array
  int size = sizeof(arr) / sizeof(int);
  
  int key;
  cout << "Enter key to find" << endl;
  cin >> key;

  int target = binarysearch(arr, key, size);

  if (target == -1) {
    cout << "element not found" << endl;

  } else {
    cout << "element found at " << target << endl;
  }
  return 0;
}