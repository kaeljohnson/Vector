#include <iostream>
#include <array>

#include "Vector.h"

int main() {
    std::array<int, 2> arrTwoD = {1, 2};
    Vector<int, 2> twoD (arrTwoD);

    //std::array<int, 3> arrThreeD = {1, 2, 3};
    //Vector<int, 3> threeD (arrThreeD);

    //std::array<int, 3> arrThreeD2 = {3, 4, 5};
    //Vector<int, 3> threeD2 (arrThreeD2);

    //std::array<double, 2> arrDoubleTwoD = {1.1, 2.2};
    //Vector<double, 2> doubleTwoD (arrDoubleTwoD);

    //std::array<double, 3> arrDoubleThreeD = {1.1, 2.2, 3.3};
    //Vector<double, 3> doubleThreeD (arrDoubleThreeD);
    
    //std::array<int, 2> getTwoD = twoD.getPoint();
    //for (auto i : getTwoD) {
    //    std::cout << i << std::endl;
    //}

    //int dotProdTwoD = twoD.dot(twoD);
    //std::cout << dotProdTwoD << std::endl;

    //int crossProd2D = twoD.cross2D(twoD);
    //std::cout << crossProd2D << std::endl;

    //Vector<int, 3> crossProd3D = threeD.cross3D(threeD2);
    //std::array<int, 3> getCrossProd3D = crossProd3D.getPoint();
    //for (auto i : getCrossProd3D) {
    //    std::cout << i << std::endl;
    //}

    //Vector<int, 2> newAddTwoD = twoD + twoD;
    //std::array<int, 2> getNewAddTwoD = newAddTwoD.getPoint();
    //for (auto i : getNewTwoD) {
    //    std::cout << i << std::endl;
    //}

    //Vector<int, 2> newSubTwoD = twoD - twoD;
    //std::array<int, 2> getNewSubTwoD = newSubTwoD.getPoint();
    //for (auto i : getNewSubTwoD) {
    //    std::cout << i << std::endl;
    //}

    //Vector<int, 2> newMultTwoD = twoD * 2.0;
    //std::array<int, 2> getNewMultTwoD = newMultTwoD.getPoint();
    //for (auto i : getNewMultTwoD) {
    //    std::cout << i << std::endl;
    //}

    //std::cout << twoD[0] << endl;
    
    return 0;
}