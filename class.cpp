#include "class.h"

Vector::Vector(const double& x, const double& y, const double& z) 
                : x_(x), y_(y), z_(z) {}

void Vector::ShowVector() {
    std::cout << "X = " << x_ << std::endl;
    std::cout << "Y = " << y_ << std::endl;
    std::cout << "Z = " << z_ << std::endl;
}

double Vector::GetVectorLength() {
    return sqrt(pow(x_,2) + pow(y_, 2) + pow(z_, 2));
}