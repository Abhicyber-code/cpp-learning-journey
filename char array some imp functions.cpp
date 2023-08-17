#include <iostream>
using namespace std;

// function to print string

void printstring(char arr[], int size) {
  int i = 0;

  while (i <= size - 1) {
    cout << arr[i];
    i++;
  }
}
// function to print reverse string

void reversestring(char arr[], int size) {
  int i = 0;
  int j = size - 1;
  while (i <= j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i];
  }
}

// function to check string palindrome

bool checkpalindrome(char arr[], int size) {
  int i = 0;
  int j = size;
  while (i <= j) {
    if (arr[i] != arr[j]) {
      return false;

    } else
      i++;
    j--;
  }
  return true;
}
int main() {

  char arr[] = "madam";
  int size = sizeof(arr);


  // print string

  printstring(arr, size);
  cout << endl;

  // reverse string

  reversestring(arr, size);
  cout << endl;

  // palindrome checking

  bool ispalindrome = checkpalindrome(arr, size);
  if (ispalindrome) {
    cout << "string is palindrome" << endl;
  } else
    cout << "string is not palindrome" << endl;
  return 0;
}