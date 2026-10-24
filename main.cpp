// This program compares two integers and determines which one is greater or smaller.
#include <iostream>
using namespace std;

int main()

{
	// Variables
	bool isGreater, isSmaller;
	int x = 10; int y = 100;
	isGreater = (x > y);
	isSmaller = (x < y);

	// Get the x and y values from the user
	cout << "Enter the first integer (10): ";
	cin >> x;
	cout << "Enter the second integer (100): ";
	cin >> y;

	// Display the results
	cout << "Is " << x << " greater than " << y << "? " << isGreater << endl;
	cout << "Is " << x << " smaller than " << y << "? " << isSmaller << endl;
	return 0;

}