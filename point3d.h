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
            point3d(double, double, double);

            //Getters:
            double readOut (char) const;

            //Mutators:
            point3d set (double, double, double);
            point3d shift (double, double, double);
            point3d shift (const point3d&);
            point3d scale (double);


            // possible assignment operator 
            point3d operator=(const point3d&);

            //friend functions:
            friend std::istream& operator >> (std::istream&, point3d&);
            


    }; 

    //nonmember functions:
    point3d operator + (const point3d&, const point3d&);
    bool operator == (const point3d&,const point3d&);


    
