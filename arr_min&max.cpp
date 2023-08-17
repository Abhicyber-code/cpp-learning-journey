#include <iostream>

using namespace std;

int main() {
  int arr[] = {67, 76, 45, 46, 67, 8, 8, 6, 5};
  int size = 9;

  int max = INT8_MIN;
  int min = INT8_MAX;

  cout << "your array is " << endl;
  
  for (int i = 0; i < size; i++) {

    // printing array for readibility
    cout << arr[i] << " ";

    
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << endl;
  cout << "mininum no in array is " << min << endl;
  cout << "maximum no in array is " << max << endl;
}