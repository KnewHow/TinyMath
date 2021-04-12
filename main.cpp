#include <iostream>

#include "Vector.hpp"
#include "Matrix.hpp"

int main(int, char**) {
    tinyMath::vec3f v1 = tinyMath::vec3f(2);
    tinyMath::vec3f v2 = tinyMath::vec3f(4,5,6);
    v1 -= v2;
    std::cout << v1 << std::endl;;
}
