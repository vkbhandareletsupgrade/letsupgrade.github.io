// C++ program to check if a string is valid or not.
#include <bits/stdc++.h>
using namespace std;
bool checkString(string s)
{
	int len = s.length();
	int first = s.size() + 1;
	for (int i = 0; i < len; i++) {
		if (s[i] == '1') {
			first = i;
			break;
		}
	}
	int last = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (s[i] == '1') {
			last = i;
			break;
		}
	}
	for (int i = first; i <= last; i++)
		if (s[i] == '0')
			return false;

	return true;
}
int main()
{
	//string s = "10101";  not valid
	// string s = "112"; valid
	string s = "29811";  //valid
	checkString(s) ? cout << "VALID\n" : cout << "NOT VALID\n";
	return 0;
}
