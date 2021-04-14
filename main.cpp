#include <iostream>

#include "Vector.hpp"
#include "Matrix.hpp"

int main(int, char**) {
    tinyMath::vec3f v1 = tinyMath::vec3f(2);
    const tinyMath::vec3f v2 = tinyMath::vec3f(4,5,6);
    v2.normalize();
    std::cout << v1 << std::endl;;
}
