/*
Namespace and definition for the point3d class


*/
#include <iostream>

namespace CMPT276{
    class point3d{

        private:
            //Constructors:
            point3d();
            point3d(double, double, double);

            //Getters:
            double readOut (char);

            //Mutators:
            point3d set (double, double, double);
            point3d shift (double, double, double);
            point3d shift (const point3d&);
            point3d scale (double);


            // possible assignment operator 
            point3d operator=(const point3d&);
        public:
            //variables:
            double x;
            double y;
            double z;

    }; 

    //nonmember functions:
    point3d operator+(const point3d&, const point3d&);
    bool operator == (const point3d&, const point3d&);
    point3d operator,(const point3d&, const point3d&);
    std::istream& operator >> (std::istream&, point3d&);


    
}
