/*
A file to test the point3d class 
*/
#include <iostream>
#include "point3d.h"

using namespace std;

int main(){

    // Default constructor test and getter test
    point3d p1;
    cout << "Defualt constructor test: " << endl;
    cout << "x: " << p1.readOut('x') << endl;
    cout << "y: " << p1.readOut('y') << endl;
    cout << "z: " << p1.readOut('z') << endl;
    cout << endl;

    // Constructor test
    point3d p2(-1.54,0,3.912348239293);
    cout << "Constructor test: " << endl;
    cout << "point3d p2(-1.54,0,3.912348239293);" << endl;
    cout << "x: " << p2.readOut('x') << endl;
    cout << "y: " << p2.readOut('y') << endl;
    cout << "z: " << p2.readOut('z') << endl;
    cout << endl;

    //setter test
    p2.set(0,3.912348239293,-1);
    cout << "setter test: " << endl;
    cout << "points set to (0,3.912348239293,-1): " << endl;
    cout << "x: " << p2.readOut('x') << endl;
    cout << "y: " << p2.readOut('y') << endl;
    cout << "z: " << p2.readOut('z') << endl;
    cout << endl;

    //shift test
    p2.shift(1,2,3);
    cout << "shift test: " << endl;
    cout << "points shifted by (1,2,3): " << endl;
    cout << "x: " << p2.readOut('x') << endl;
    cout << "y: " << p2.readOut('y') << endl;
    cout << "z: " << p2.readOut('z') << endl;
    cout << endl;

    //scalar test
    p2.scale(2);
    cout << "scalar test: " << endl;
    cout << "points scaled by 2: " << endl;
    cout << "x: " << p2.readOut('x') << endl;
    cout << "y: " << p2.readOut('y') << endl;
    cout << "z: " << p2.readOut('z') << endl;
    cout << endl;

    //addition test
    point3d p3(-1.111,-10.,3);
    point3d p4(-40.222,10,6);
    point3d p5 = p3 + p4;
    cout << "addition test: " << endl;
    cout << "p3(-1.111,-10.,3) + p4(-40.222,10,6): " << endl;
    cout << "x: " << p5.readOut('x') << endl;
    cout << "y: " << p5.readOut('y') << endl;
    cout << "z: " << p5.readOut('z') << endl;
    cout << endl;

    //equality test
    point3d p6(1,2,3);
    point3d p7(1,2,3);
    point3d p8(4,5,6);
    cout << "equality test: " << endl;
    cout << "p6(1,2,3) == p7(1,2,3): " << (p6 == p7) << endl;
    cout << "p6(1,2,3) == p8(4,5,6): " << (p6 == p8) << endl;
    cout << endl;

    //instream test
    point3d p9;
    cout << "instream test: " << endl;
    cout << "Enter an x, y, and z: ";
    cin >> p9;
    cout << "x: " << p9.readOut('x') << endl;
    cout << "y: " << p9.readOut('y') << endl;
    cout << "z: " << p9.readOut('z') << endl;
    cout << endl;
    







    



}