#include <iostream>
using namespace std;

int sumofn(int n) {
  int sum = 0;
  for (int i = 2; i <= n; i = i + 2) {
    sum = sum + i;
  }
  return sum;
}

float areaofcircle(float r) {
  float area = 3.14 * (r * r);
  return area;
}

void evenodd(int n) {
  if (n % 2 == 0) {
    cout << "even";
  } else {
    cout << "odd";
  }
}

int main() {

  int n;
  cout << "enter number ";
  cin >> n;

  evenodd(n);
  cout << "number is " << ans << endl;

  return 0;
}