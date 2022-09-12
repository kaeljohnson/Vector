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
    Vector(std::array<type, dimension> arr) {
      point = arr;
    }

    type dot(Vector<type, dimension> &toDot) {
      type dotted = 0;
      for (int idx = 0; idx < dimension; idx++) {
        dotted += point[idx] * toDot[idx];
      }
      return dotted;
    }

    type cross2D(Vector<type, 2> &toCross) {
      return point[0] * toCross[1] - point[1] * toCross[0];
    }

    Vector<type, 3> cross3D(Vector<type, 3> &toCross) {
      std::array<type, dimension> crossProduct;
      crossProduct[0] = point[1] * toCross[2] - point[2] * toCross[1]; 
      crossProduct[1] = point[2] * toCross[0] - point[0] * toCross[2];
      crossProduct[2] = point[0] * toCross[1] - point[1] * toCross[0];

      return crossProduct;
    }

    Vector<type, dimension> operator+(Vector<type, dimension> &toAdd) {
      std::array<type, dimension> newPoint;
      for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] + toAdd[idx];
      } 

      Vector<type, dimension> addedVec (newPoint);
      return addedVec;
    }

    Vector<type, dimension> operator-(Vector<type, dimension> &toSub) {
      std::array<type, dimension> newPoint;
      for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] - toSub[idx];
      } 
      Vector<type, dimension> subtractedVec (newPoint);
      return subtractedVec;
    }

    Vector<type, dimension> operator*(int toScale) {
      std::array<type, dimension> newPoint;
      for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] * toScale;
      } 
      Vector<type, dimension> multipliedVec (newPoint);
      return multipliedVec;
    }

    type &operator[](size_t idx) {
      return point[idx];
    }

    std::array<type, dimension> getPoint() {
      return point;
    }
};

#endif