#pragma once 
#include <iostream>
#include <math.h>

class Vector {
    private:
        double x_ = 0.0;
        double y_ = 0.0;
        double z_ = 0.0;
    public:
        Vector() {}
        Vector(const double& x, const double& y, const double& z);
        void ShowVector();
        double GetVectorLength();
};