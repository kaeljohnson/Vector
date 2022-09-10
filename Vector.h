#ifndef VECTOR_H
#define VECTOR_H

#include <type_traits>
#include <array>

template<class type, int dimension>
class Vector {
  private:
    static_assert(std::is_arithmetic<type>::value, "Not an arithmetic type");
    std::array<type, dimension> point;
  
  public:
    Vector(type arr[dimension]);

    type dot(Vector<type, dimension> &toDot);
    Vector<type, 2> cross2D(Vector<type, 2> &toCross);
    Vector<type, 3> cross3D(Vector<type, 3> &toCross);

    Vector<type, dimension> scale(Vector<type, dimension> &toScale);

    Vector<type, dimension> operator+(Vector<type, dimension> &toAdd);
    Vector<type, dimension> operator*(double &toScale);
    type &operator[](size_t idx);
};

#endif