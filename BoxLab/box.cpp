#include "box.hpp"

// Calculate and return box area member function
double Box::calcBoxArea() {
	return 2*width*length+2*width*depth+2*length*depth;
}
// Calculate and return box volume member function
double Box::calcBoxVolume() {
	return width*length*depth;
}
