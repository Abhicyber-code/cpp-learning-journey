#include <iostream>
using namespace std;

void convert_to_uppercase(char arr[], int size) {
  int i = 0;
  int j = size - 1;

  while (i <= j) {
    if (arr[i] >= 'a' && arr[i] <= 'z') {
      arr[i] = arr[i] - 32;
    }

    cout << arr[i];
    i++;
  }
}

void convert_to_lowercase(char arr[], int size) {
  int i = 0;
  int j = size - 1;

  while (i <= j) {
    if (arr[i] >= 'A' && arr[i] <= 'Z') {
      arr[i] = arr[i] + 32;
    }

    cout << arr[i];
    i++;
  }
}
int main() {
  char arr[] = "mAdaM";
  int size = sizeof(arr) - 1;
  convert_to_uppercase(arr, size);
  cout << endl;
  convert_to_lowercase(arr, size);
  return 0;
}
