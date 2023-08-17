#include <iostream>
using namespace std;

int main() {

  // declaring char array

  char arr[] = "abhijeet";
  char brr[5] = {'a', 'b', 'c', 'd', 'e'};

  // printing char array using while loop

  int i = 0;

  while (i <= sizeof(arr)) {
    cout << arr[i];
    i++;
  }
  cout << endl;

  // printing char array using while loop
  
  int size = sizeof(brr);
  for (int i = 0; i < size; i++) {
    cout << brr[i];
  }

  return 0;
}