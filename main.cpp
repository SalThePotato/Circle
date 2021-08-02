#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
	cout << "Welcome to circle. No spheres allowed" << endl;

	// I don't know what exactly to do for the main function

	Circle c(0, 0, 3);
	
	cout << c.circumference();

	return 0;
}