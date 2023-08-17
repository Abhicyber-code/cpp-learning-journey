#include <iostream>
using namespace std;

void printrowsum(int arr[][3]) {
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + arr[i][j];
    }
    cout << "sum of row " << i << " is " << sum << endl;
  }
  cout << endl;
}

void printcolsum(int arr[][3]) {
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + arr[j][i];
    }
    cout << "sum of col " << i << " is " << sum << endl;
  }
  cout << endl;
}

bool findkey(int arr[][3], int key) {
  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      if (key == arr[i][j]) {
        return true;
      }
    }
  }
  return false;
}

void printarray(int arr[][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j]<<" ";
    }
    cout << endl;
  }
}

int main() {
  int arr[3][3] = {1,2,3,4,9,8,7,5,6};

  cout << "printing 2d array..." << endl;
  printarray(arr);
  cout << endl;
  printrowsum(arr);

  printcolsum(arr);

  int key = 0;
  cout << "Enter element to search in array" << endl;
  cin >> key;

  if (findkey(arr, key)) {
    cout << "Element Found" << endl;
  } else
    cout << "Not Found" << endl;
  return 0;
}