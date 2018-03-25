#include <iostream>
#include "ArrayOperations.h"
using namespace std;

void ArrayOperations::acceptData() {
    cout<<"\nEnter number of elements(less than 10):-";
    cin>>num;
    for(i=0;i<num;i++){
        cout<<"\nEnter data:-";
        cin>>A[i];
    }   
}

void ArrayOperations::diplayData() {
    cout<<"\nDisplaying array data:-";
    for(i=0;i<num;i++){
        cout<<A[i]<<" ";
    }
}

void ArrayOperations::arrayRotate() {
    cout<<"\nEnter the elements to rotate:-";
    cin>>element;
    for(i=0;i<element;i++){
        temp = A[0];
        for(j=0;j<num-1;j++){
            A[j]=A[j+1];
        }
        A[j]=temp;
    }
}

void ArrayOperations::arrayCylicRotation() {
    cout<<"\nCyclic rotation of array:- ";
    temp = A[num-1];
    for(i=num-1;i>0;i--){
        A[i]=A[i-1];
    }
    A[i]= temp;
}

void ArrayOperations::searchElement() {
    cout<<"\nEnter the key to be searched:-";
    cin>>key;
    mid = num/2;
    cout<<mid<<endl;
    while(A[mid]!=key){
        if(key >= A[0] && key <= A[mid]){
            cout<<"\nhi"<<mid;
          //  mid= mid+0;
            mid = mid/2;
            cout<<endl<<mid;
        }
        else if(key <= A[mid] && key <= A[num-1]){
            mid= mid+num-1;
            mid = mid/2;
        }
        else if(key >= A[mid] && key >= A[num-1]){
            cout<<"yo men";
           // mid= mid+1;
            mid = mid/2;
        }
    }
    if(A[mid] == key){
        cout<<"Key found at position:"<<mid;
    }
}

