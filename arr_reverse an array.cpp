#include <iostream>

using namespace std;

int main() {
  int arr[] = {
      0, 0, 1, 1, 8, 7, 3, 8, 1, 3, 4, 8, 7, 1, 8, 7,
  };
  int size = 16;

  int start = 0;
  int end = size - 1;

  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
