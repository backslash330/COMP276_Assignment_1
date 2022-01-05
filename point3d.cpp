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
            return x;
        case 'y':
            return y;
        case 'z':
            return z;
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
    //return the sum of two points
    double xSum, ySum, zSum;
    // WHAT IS ADDITION SUPPOSED TO DO?
}

bool operator ==(const point3d& p1, const point3d& p2){
    //return true if two points are equal
    if(p1.x == p2.x && p1.y == p2.y && p1.z == p2.z){
        return true;
    }
    else{
        return false;
    }
}

point3d operator ,(const point3d& p1, const point3d& p2){
    //return the cross product of two points
    double xSum, ySum, zSum;
    // WHAT IS COMMA SUPPOSED TO DO?
}

istream& operator >>(istream& in, point3d& p){
    //read in a point from a stream
    in >> p.x >> p.y >> p.z;
    return in;
}

