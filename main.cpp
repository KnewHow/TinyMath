#include <iostream>

#include "Vector.hpp"
#include "Matrix.hpp"

int main(int, char**) {
    tinyMath::vec3f v = tinyMath::vec3f(1,1,1);
    tinyMath::mat3f m = tinyMath::mat3f();
    std::cout << m << std::endl;;
}
