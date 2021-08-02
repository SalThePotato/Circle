#include "Circle.h"
#include <math.h> // We need the square root function   

// Constructor
Circle::Circle(double x_in, double y_in, double radius_in) : x{ x_in }, y{ y_in }, radius{ radius_in }
{

}


// Getter functions
double Circle::get_x() const
{
	return x;
}

double Circle::get_y() const
{
	return y;
}

double Circle::get_radius() const
{
	return radius;
}


// Get the circle's area and circumfrenece
double Circle::area(double pi) const
{
	// The forumala for a circle's area is raidus squared times pi.
	return pow(radius, 2) * pi;
}

double Circle::circumference(double pi) const
{
	// The formula for a circle's circumfrence is 2 * radius, or diamater, times pi
	return 2 * radius * pi;
}


// Distance functions
double Circle::distance(double x1, double y1, double x2, double y2)  
{
	// We first find the distance between each point on the same plane
	double x_distance = x2 - x1;
	double y_distance = y2 - y1;

	/* Then we square each number so that it's not a negative number because a negative distance
	 doesn't make sense. */
	x_distance = pow(x_distance, 2);
	y_distance = pow(y_distance, 2);

	// We then add the two distances 
	double distance = x_distance + y_distance;

	/* We squared the two distances before to get rid of any negative numbers but it made the numbers 
	   way bigger then they are so we get the square root of the distance to erase that effect and we have our distance*/
	return sqrt(distance);
}

double Circle::distance_from_circle_center(double x2, double y2) const
{
	// I used the this keyword to indicate that's the circle's location
	return distance(this->x, this->y, x2, y2);
}


// Overlap and contain functions
bool Circle::contains(double x, double y) const
{
	// Gets the distance between the circle's center and the location passed in
	double distance = distance_from_circle_center(x, y);

	// Then it checks if that distance is less than to the circle's radius meaning it's in the circle. Else, it's not
	if (distance > radius)
		return true;
	else
		return false;
}

bool Circle::overlaps(const Circle& other) const
{
	double radius_combined = this->radius + other.get_radius();
	double distance_between_centers = distance_from_circle_center(other.get_x(), other.get_y());

	if (distance_between_centers > radius_combined)
		return true;
	else
		return false;
}


// Returns the circle's info in the form of a string
string Circle::info_to_string() const
{
	// Not working. I have no idea how to do this
	string info = "{ x: ";
	info += x;
	info += ", y: ";
	info += y;
	info += ", radius: ";
	info += radius;
	info += " }";
	return info;
}