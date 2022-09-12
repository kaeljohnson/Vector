#include <iostream>
#include <array>

#include "Vector.h"

template<typename type, int dimension>
Vector<type, dimension>::Vector(std::array<type, dimension> arr) {
    point = arr;
}

template <typename type, int dimension>
type Vector<type, dimension>::dot(Vector<type, dimension> &toDot) {
    type dotted = 0;
    for (int idx = 0; idx < dimension; idx++) {
        dotted += point[idx] * toDot[idx];
    }
    return dotted;
}

template <typename type, int dimension>
type Vector<type, dimension>::cross2D(Vector<type, 2> &toCross) {
    return point[0] * toCross[1] - point[1] * toCross[0];
}

template <typename type, int dimension>
Vector<type, 3> Vector<type, dimension>::cross3D(Vector<type, 3> &toCross) {
    std::array<type, dimension> crossProduct;
    crossProduct[0] = point[1] * toCross[2] - point[2] * toCross[1]; 
    crossProduct[1] = point[2] * toCross[0] - point[0] * toCross[2];
    crossProduct[2] = point[0] * toCross[1] - point[1] * toCross[0];

    return crossProduct;
}

template <typename type, int dimension>
Vector<type, dimension> Vector<type, dimension>::operator+(Vector<type, dimension> &toAdd) {
    std::array<type, dimension> newPoint;
    for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] + toAdd[idx];
    } 

    Vector<type, dimension> addedVec (newPoint);
    return addedVec;
}

template <typename type, int dimension>
Vector<type, dimension> Vector<type, dimension>::operator-(Vector<type, dimension> &toSub) {
    std::array<type, dimension> newPoint;
    for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] - toSub[idx];
    } 

    Vector<type, dimension> subtractedVec (newPoint);
    return subtractedVec;
}

template <typename type, int dimension>
Vector<type, dimension> Vector<type, dimension>::operator*(int toScale) {
    std::array<type, dimension> newPoint;
    for (size_t idx = 0; idx < dimension; idx++) {
        newPoint[idx] = point[idx] * toScale;
    } 

    Vector<type, dimension> multipliedVec (newPoint);
    return multipliedVec;
}

template <typename type, int dimension>
type& Vector<type, dimension>::operator[](size_t idx) {
    return point[idx];
}

template <typename type, int dimension>
std::array<type, dimension> Vector<type, dimension>::getPoint() {
    return point;
}
