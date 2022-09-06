// C++ Linear Search
#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int key)
{
	if (size == 0) {
		return -1;
	}
	if (arr[size - 1] == key) {
		return size - 1;
	}
	else {
		int ans = linearsearch(arr, size - 1, key);
		return ans;
	}
}


int main()
{
	int arr[5] = { 5, 15, 6, 9, 4 };
	int key = 4;

	// Function call
	int ans = linearsearch(arr, 5, key);
	if (ans == -1) {
		cout<<endl<<"The element "<< key << " is not found.";
	}
	else {
		cout <<endl<<"The element "<< key << " is found at "<<ans<< " index of the given array.";
	}
	return 0;
}

