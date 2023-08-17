#include <iostream>
using namespace std;

int main() {
  int arr[3][3] = {1, 5, 7, 9, 6, 4, 8, 7, 5};
  // row wise sum
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
  // column wise sum
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + arr[j][i];
    }
    cout << sum << endl;
  }
  return 0;
}