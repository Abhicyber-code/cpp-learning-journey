#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> arr{10,20,30,40,20,20,50,10,20,70,5,5};
  int sum = 80;

//   3loops 

  for (int i = 0; i < arr.size(); i++) {
    int element1=arr[i];

    for (int j = i + 1; j < arr.size(); j++) {
      int element2=arr[j];

      for (int k = j + 1; k < arr.size(); k++) {
        int element3=arr[k];
        
        if (arr[i] + arr[j] + arr[k] == sum) {
          cout << "triplet is (" << element1 << "," <<element2 << "," << element3
               << ")" << endl;
        }
      }
    }
  }

  return 0;
}