#include <iostream>
using namespace std;

int firstocc(int arr[], int key, int size) {
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  int answer = -1;

  while (start <= end) {
    if (arr[mid] == key) {
     // store ans
      answer = mid;
    //   first occurance will be on left side therefore :
      end = mid - 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
   mid = start + (end - start) / 2;
  }
  return answer;
}

int lastocc(int arr[], int key, int size) {

  int start = 0;
  int end = size - 1;
  int mid;
  int answer2 = -1;

  while (start <= end) {
    mid = start + (end - start) / 2;
    if (arr[mid] == key) {
     // store ans
      answer2 = mid;
      //   last occurance will be on right side therefore :
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return answer2;
}

int main() {

  int arr[] = {1, 2, 3, 5, 5, 5, 7, 8, 8, 8, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  int key;
  cout << "enter key to find" << endl;
  cin >> key;
  int ans = firstocc(arr, key, size);

  if (ans == -1) {
    cout << "element not found" << endl;
  } else {
    cout << "first occurance of element is " << ans << endl;
  }

  int ans2 = lastocc(arr, key, size);

  if (ans2 == -1) {
    cout << "element not found" << endl;
  } else {
    cout << "last occurance of element is " << ans2 << endl;
  }
  return 0;
}