#ifndef ARRAYOPERATIONS_H
#define ARRAYOPERATIONS_H

class ArrayOperations{
private:
    int num,element,temp,j,i,num1,key,mid;
    int sum=0;
    int flag =0;
    int high,low;
    int A[10];
    int start =0;
    int end;
public:
    void acceptData();
    void diplayData();
    void arrayRotate();
    void arrayCylicRotation();
    void searchElement();
    void addElement();
    void reverseArray();
    void sortArrayWaveForm();
    void sortArrayAbsoluteDifference();
    void threeWayPartition();
};

#endif /* ARRAYOPERATIONS_H */

