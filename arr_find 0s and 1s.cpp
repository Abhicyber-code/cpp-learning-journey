#include <iostream>

using namespace std;

int main() {
  int arr[] = {0, 0, 1, 1};
  int size = 4;

  int zero = 0;
  int one = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 0)
      zero++;
    if (arr[i] == 1)
      one++;
  }
  cout << "no of zeros are " << zero << endl;
  cout << "no of ones are " << one << endl;
}
