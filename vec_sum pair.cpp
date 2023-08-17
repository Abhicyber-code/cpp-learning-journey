#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> arr{7,8,6,7,5,3,4,12,2};
  int sum = 14;

// outer loop to traverse betn each element
  for (int i = 0; i < arr.size(); i++) {
    int element = arr[i];

    // inner loop starts from i+1 coz we pair with element next to 1st position
    for (int j = i + 1; j < arr.size(); j++) {
    
      //printing all pairs cout << "(" << element << " " << arr[j] << ")" <<endl;


    //   check pair is equal to sum or not
      if (element+arr[j]==sum){
        cout<<"pair equal to sum is ("<<arr[i]<<","<<arr[j]<<")"<<endl;
      }
    }
  }

  return 0;
}