#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 1, 3, 8, 1, 3, 4, 8, 7, 1, 8, 7};
  int size = 12;

  int start = 0;
  int end = size - 1;

  while (true) {
    if (start > end) {
      break;
    }
    cout << arr[start] << " ";
    cout << arr[end] << " ";
    start++;
    end--;
  }
}
