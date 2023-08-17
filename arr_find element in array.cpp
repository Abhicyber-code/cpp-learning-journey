#include <iostream>

using namespace std;

bool findkey(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

int main() {
  int arr[] = {3, 5, 7, 8, 5, 4, 3};
  int size = 7;
  int key = 0;
  // bool flag = 0;
  cout << "enter key to find in array ";
  cin >> key;
  // for (int i = 0; i < size; i++) {
  //   if (arr[i] == key) {
  //     flag = 1;
  //   }
  // }
  // if (flag == 1) {
  //   cout << "found";
  // } else
  //   cout << "not found";

  if (findkey(arr, size, key)) {
    cout << "found";

  } else
    cout << "not found";
}
