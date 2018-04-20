#include <iostream>
#include <vector>
using namespace std;

int main() {
	std::cout << "Goodbye World!\n";

	vector<int> Vector1;	// This is william's vector
	std::cout << "William's vector contains: ";
	for (int i = 0; i < 10; i++) { Vector1.push_back(i); }
	for (int x : Vector1) {
		cout << x;
	}

	cout << "What is int x : Vector 1 do? \n\n";


	return 0;
}
