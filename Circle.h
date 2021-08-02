#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Circle
{

public:

	// Constructor
	Circle(double x, double y, double radius);

	// Getter functions
	double get_x() const;
	double get_y() const;
	double get_radius() const;

	// Get the circle's area and circumfrenece. You can enter your own digit for pi but it defaults to 3.14
	double area(double pi = 3.14) const;
	double circumference(double pi = 3.14) const;

	// Distance functions
	static double distance(double x1, double y1, double x2, double y2);
	double distance_from_circle_center(double x2, double y2) const;

	// Overlap and contain functions
	bool contains(double x, double y) const;
	bool overlaps(const Circle& other) const;

	// Returns the circle's info in the form of a string
	string info_to_string() const;

private:
	
	// This circle's x, y, and radius 
	double x; 
	double y;
	double radius;
};

