/*
Impliments the Point3D class
*/
#include "point3d.h"
using namespace std;

point3d::point3d() {
    // Default constructor
    // PRECONIDITION: None
    // POSTCONIDITION: Create a new point3d object with default values
    x = 0;
    y = 0;
    z = 0;
    return;
}

point3d::point3d(double x, double y, double z) {
    // PRECONIDITION: None
    // POSTCONIDITION: Create a new point3d object with the given values
    this->x = x;
    this->y = y;
    this->z = z;
    return;
}

double point3d::readOut(char selection) const {
    // PRECONIDITION: selection must be either 'x', 'y', or 'z'
    // POSTCONIDITION: Return the selected coordinate or 0 if invalid
    switch(selection){
        case 'x':
            return this->x;
        case 'y':
            return this->y;
        case 'z':
            return this->z;
        default:
            return 0;
    }
}

point3d point3d::set(double x, double y, double z) {
    // PRECONDITION: user must give positive double values for x, y, and z
    // POSTCONDITION: Set the point to the given values 
    this->x = x;
    this->y = y;
    this->z = z;
    return *this;
}

point3d point3d::shift(double x, double y, double z) {
    // PRECONIDITION: user must give positive double values for x, y, and z
    // POSTCONDITION: Shift the point by the given values
    this->x += x;
    this->y += y;
    this->z += z;
    return *this;
}

point3d point3d::shift(const point3d& other) {
    // PRECONIDITION: user must give a valid point3d object
    // POSTCONDITION: Shift the point by the given values
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return *this;
}

point3d point3d::scale(double scalar) {
    // PRECONIDITION: user must give a positive double value for scalar
    // POSTCONDITION: Scale the point by the given value
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

point3d operator +(const point3d& p1, const point3d& p2){
    // Precondition: p1 and p2 are valid point3d objects
    // Postcondition: Return a new point3d object with the sum of the two points
    double xSum, ySum, zSum;
    double p1x, p1y, p1z;
    double p2x, p2y, p2z;
    p1x = p1.readOut('x');
    p1y = p1.readOut('y');
    p1z = p1.readOut('z');
    p2x = p2.readOut('x');
    p2y = p2.readOut('y');
    p2z = p2.readOut('z');
    xSum = p1x + p2x;
    ySum = p1y + p2y;
    zSum = p1z + p2z;
    point3d sum(xSum, ySum, zSum);
    return sum;
}

bool operator ==(const point3d& p1,const point3d& p2){
    // Precondition: p1 and p2 are valid point3d objects
    // Postcondition: Return true if the two points are equal
    double p1X, p1Y, p1Z, p2X, p2Y, p2Z;
    p1X = p1.readOut('x');
    p1Y = p1.readOut('y');
    p1Z = p1.readOut('z');
    p2X = p2.readOut('x');
    p2Y = p2.readOut('y');
    p2Z = p2.readOut('z');
    if(p1X == p2X && p1Y == p2Y && p1Z == p2Z){
        return true;
    }
    else{
        return false;
    }

}

istream& operator >>(istream& ins, point3d& target){
    // Precondition: user gives a valid input stream and a valid point3d object
    // Postcondition: Read in the x, y, and z values from the input stream and set the target point to those values
    ins >> target.x >> target.y >> target.z;
    return ins;
}

