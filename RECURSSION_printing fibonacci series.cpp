#include <iostream>
using namespace std;

int printfibb(int n) {

  // base case
  if (n == 0 || n == 1) {
    return n;
  }
  // resurssive relation
  return printfibb(n - 1) + printfibb(n - 2);
}

int main() {
  cout << "Enter the number of terms in the Fibonacci series: ";
  int n = 0;
  cin >> n;

  // no. at specific position
  int a = printfibb(n);
  cout << a << endl;

  // printing all no. in series
  for (int i = 0; i <= n; i++) {
    cout << printfibb(i) << " ";
  }
  return 0;
}