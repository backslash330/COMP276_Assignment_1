/*
Impliments the Point3D class
*/
#include "point3d.h"
using namespace CMPT276;
using namespace std;

point3d::point3d() {
    // Default constructor

    // Initialize the point to (0,0,0)
    x = 0;
    y = 0;
    z = 0;
    return;
}

point3d::point3d(double x, double y, double z) {
    // Constructor

    // Initialize the point to (x,y,z)
    this->x = x;
    this->y = y;
    this->z = z;
    return;
}

double point3d::readOut(char selection){
    // Return the selected coordinate
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
    // Set the point to (x,y,z)
    this->x = x;
    this->y = y;
    this->z = z;
    return *this;
}

point3d point3d::shift(double x, double y, double z) {
    // Shift the point by (x,y,z)
    this->x += x;
    this->y += y;
    this->z += z;
    return *this;
}

point3d point3d::shift(const point3d& other) {
    // Shift the point by other
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return *this;
}

point3d point3d::scale(double scalar) {
    // Scale the point by (x,y,z)
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

point3d operator +(const point3d& p1, const point3d& p2){
    // combine the two point3ds and return a new point 3d
    double xSum, ySum, zSum;
    xSum = p1.x + p2.x;
    ySum = p1.y + p2.y;
    zSum = p1.z + p2.Z;
    point sum(xSum,ySum,zSum);
    return sum;
}

bool operator ==( point3d& p1,  point3d& p2){
    //return true if two points are equal
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

istream& operator >>(istream& in, point3d& p){
    //read in a point from a stream
    in >> p.x >> p.y >> p.z;
    return in;
}

