#include <iostream>
#include "ArrayOperations.h"
using namespace std;
int main() {
    ArrayOperations a;
    /*Accept array*/
    a.acceptData();
    a.diplayData();
    /*Rotate array by some number*/
//   a.arrayRotate();
//    a.diplayData();
    /*Rotate array in cyclic form*/
//    a.arrayCylicRotation();
//    a.diplayData();
    /*search element in less time O(n)*/
//    a.searchElement();
    /*find weather addition of two elements of a array is equal to the value entered by user*/
//    a.addElement();
    /*Reverse an Array */
//    a.reverseArray();
//    a.diplayData();
    /*sort array in wave form*/
//    a.sortArrayWaveForm();
//    a.diplayData();
    /*sort array according to absolute difference using multimap*/
//    a.sortArrayAbsoluteDifference();
//    a.diplayData();
        
    a.threeWayPartition();
    a.diplayData();
    
    return 0;
}

