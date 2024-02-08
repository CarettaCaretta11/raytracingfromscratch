#include <iostream>
#include <vector>
#include <cmath>

class Sphere {
    public:
        Sphere(double radius, double x, double y, double z) : radius(radius), center_x(x), center_y(y), center_z(z) {}

        // Determine intersections with a given ray
        std::vector<double> intersections(
                const std::vector<double>& ray_origin,
                const std::vector<double>& ray_direction
                ) const {
            // To be implemented
            return std::vector<double>();
        }

    private:
        double radius;
        double center_x;
        double center_y;
        double center_z;
};
