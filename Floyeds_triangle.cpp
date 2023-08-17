#include <iostream>
using namespace std;
int main() {
  int n;
  
  cin>>n;
  int counter=1;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
    cout<< counter;
      counter++;
    }cout << endl;
  }
}