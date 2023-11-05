#include "class.h"

int main() {
    Vector v1, v2(-2, 4, 3);
    v1.ShowVector();
    v2.ShowVector();

    std::cout << v1.GetVectorLength() << std::endl;
    std::cout <<  v2.GetVectorLength() << std::endl;

    return 0;
}