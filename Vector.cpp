#include <iostream>
#include <vector>
using namespace std;

int main() {

  // n based array
  int n;
  cout << "enter n" << endl;
  cin >> n;

  vector<int> drr(n);
  for (int i = 0; i < drr.size(); i++) {
    cout << drr[i];
  }
  cout << endl;

  
 // n based array with initial value
  vector<int> mrr(n,4);
  for (int i = 0; i < mrr.size(); i++) {
    cout << mrr[i];
  }
  cout << endl;
  // initializing vector with size
  cout << "initial value is 0 always " << endl;
  vector<int> brr(5);
  for (int i = 0; i < brr.size(); i++) {
    cout << brr[i];
  }
  cout << endl;

  // initializing vector with size and value
  cout << "initialized with fix value " << endl;
  vector<int> crr(5, 2);
  for (int i = 0; i < crr.size(); i++) {
    cout << crr[i];
  }
  cout << endl;

  // initializing vector
  vector<int> arr{
      4, 4, 5, 7, 8, 7, 7, 4,
  };

  // size of array
  int size = sizeof(arr);
  cout << "size of array is " << size << endl;

  // adding and removing elements from array
  arr.pop_back();
  arr.push_back(5);

  // capacity(no. of elements it can store)
  int capacity = arr.capacity();
  cout << "capacity of array is " << capacity << endl;

  // check if array is empty...if empty returns 1 otherwise 0
  int empty = arr.empty();
  cout << "checking empty " << empty << endl;

  // printing array
  cout << "printing arr " ;
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
  }

  return 0;
}