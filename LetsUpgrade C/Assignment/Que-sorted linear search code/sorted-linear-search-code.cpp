//sorted linear search code
#include<iostream>
  using namespace std;

void linearSearch(int a[], int num) {
  int temp = -1;

  for (int i = 0; i < 5; i++) {
    if (a[i] == num) {
      cout << "Element found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}

int main() {
  int arr[5];
  cout << "Please enter 5 elements of the Array" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;

  linearSearch(arr, num);

  return 0;
}