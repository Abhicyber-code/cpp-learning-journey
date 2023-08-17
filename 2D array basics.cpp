#include <iostream>
using namespace std;

int main() {
  //  taking input in array

  int crr[4][4];
  int rows = 4;
  int col = 4;

  cout << "enter elements" << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < col; j++) {
      cin >> crr[i][j];
    }
  }
  
  cout << "printing crr ..." << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < col; j++) {
      cout << crr[i][j];
    }
    cout << endl;
  }
  cout << endl;

  
   cout << "int is of 4 bytes and total elements are 16" << endl
       << "Therefore size of arr is " << sizeof(crr) << endl
       << endl;

  // initializing 2d array, arr[rows][columns];
  // both methods are same

  int arr[4][5] = {1, 2, 4, 5, 7, 8, 9, 7, 8, 5, 4, 1, 2, 3, 6, 5, 7, 8, 9, 5};

  int brr[4][5] = {
      {1, 2, 4, 5, 7}, {8, 9, 7, 8, 5}, {4, 1, 2, 3, 6}, {5, 7, 8, 9, 5}};

 

  // printing 2d array
  // i for rows, j for columns

  cout << "printing 2d array arr...." << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
  cout << endl;

  //   printing brr...

  cout << "printing 2d array brr...." << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << brr[i][j];
    }
    cout << endl;
  }

  //   printing column wise wise
  cout << "printing column wise brr" << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << brr[j][i];
    }
    cout << endl;
  }

  return 0;
}