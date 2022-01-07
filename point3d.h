/*
Namespace and definition for the point3d class


*/
#include <iostream>

    class point3d{

        private:

            //variables:
            double x;
            double y;
            double z;

        public:
            //Constructors:
            point3d();
            // PRECONIDITION: None
            // POSTCONIDITION: Create a new point3d object with default values

            point3d(double, double, double);
            // PRECONIDITION: selection must be either 'x', 'y', or 'z'
            // POSTCONIDITION: Return the selected coordinate or 0 if invalid
            
            //Getters:
            double readOut (char) const;

            //Mutators:
            point3d set (double, double, double);
            // PRECONDITION: user must give positive double values for x, y, and z
            // POSTCONDITION: Set the point to the given values 
            
            point3d shift (double, double, double);
            // PRECONIDITION: user must give positive double values for x, y, and z
             // POSTCONDITION: Shift the point by the given values
            
            point3d shift (const point3d&);
            // PRECONIDITION: user must give a valid point3d object
            // POSTCONDITION: Shift the point by the given values

            point3d scale (double);
            // PRECONIDITION: user must give a positive double value for scalar
            // POSTCONDITION: Scale the point by the given value

            //friend functions:
            friend std::istream& operator >> (std::istream&, point3d&);
            // Precondition: p1 and p2 are valid point3d objects
            // Postcondition: Return a new point3d object with the sum of the two points


    }; 

    //nonmember functions:
    point3d operator + (const point3d&, const point3d&);
    // Precondition: p1 and p2 are valid point3d objects
    // Postcondition: Return true if the two points are equal

    bool operator == (const point3d&,const point3d&);
    // Precondition: user gives a valid input stream and a valid point3d object
    // Postcondition: Read in the x, y, and z values from the input stream and set the target point to those values


    
