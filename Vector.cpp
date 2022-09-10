#include "Vector.h"

template<typename type, int dimension>
Vector<type, dimension>::Vector(type arr[dimension]) {
    point = arr;
}

template <typename type, int dimension>
type Vector<type, dimension>::dot(Vector<type, dimension> &toDot) {
    type dotted {0};
    for (auto idx : dimension) {
        dotted += point[idx] * toDot[idx];
    }
    return dotted;
}

template <typename type, int dimension>
Vector<type, 2> Vector<type, dimension> ::cross2D(Vector<type, 2> &toCross) {
}

template <typename type, int dimension>
Vector<type, 3> Vector<type, dimension>::cross3D(Vector<type, 3> &toCross) {

}

template <typename type, int dimension>
Vector<type, dimension> Vector<type, dimension>::operator+(Vector<type, dimension> &toAdd) {}

template <typename type, int dimension>
Vector<type, dimension> Vector<type, dimension>::operator*(double &toScale) {}

template <typename type, int dimension>
type& Vector<type, dimension>::operator[](size_t idx) {}

