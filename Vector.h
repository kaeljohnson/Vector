#ifndef VECTOR_H
#define VECTOR_H

#include <type_traits>
#include <iostream>
#include <array>

template<typename type, int dimension>
class Vector {
  private:
    static_assert(std::is_arithmetic<type>::value, "Not an arithmetic type");
    std::array<type, dimension> point;

  public:
    Vector(std::array<type, dimension> arr);

    type dot(Vector<type, dimension> &toDot);
    type cross2D(Vector<type, 2> &toCross);
    Vector<type, 3> cross3D(Vector<type, 3> &toCross);

    Vector<type, dimension> scale(Vector<type, dimension> &toScale);

    Vector<type, dimension> operator+(Vector<type, dimension> &toAdd);
    Vector<type, dimension> operator-(Vector<type, dimension> &toSub);
    Vector<type, dimension> operator*(int toScale);
    type &operator[](size_t idx);

    std::array<type, dimension> getPoint();
};

#endif