#include <iostream>
#include <algorithm>
#include <map>
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
       /* else if(key >= A[mid] && key >= A[num-1]){
            cout<<"yo men";
            mid= mid+1;
            mid = mid/2;
        }*/
    }
    if(A[mid] == key){
        cout<<"Key found at position:"<<mid;
    }
}

void ArrayOperations::addElement() {
    cout<<"\nEnter the sum value:-";
    cin>>element;
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            sum = A[i]+A[j];
            if(sum == element){
                cout<<"pair present:-"<<A[i]<<","<<A[j];
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag ==0)
        cout<<"Pair not found.";
}

void ArrayOperations::reverseArray() {
    cout<<"\nReversing the whole array:-";
    int temp;
    int start=0;
    int end = num-1;
    while (start < end){
        temp = A[start];   
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }   
}

void ArrayOperations::sortArrayWaveForm() {
    int temp;
    cout<<"\nSorting array in wave form:-";
    sort(A,A+num);
    for(i=0;i<num-1;i+=2){
        temp = A[i];
        A[i] = A[i+1];
        A[i+1]=temp;
    }
}

void ArrayOperations::sortArrayAbsoluteDifference() {
    multimap<int,int>m;
    multimap<int,int>::iterator it;
    cout<<"\nEnter the number for absolute difference:-";
    cin>>element;
    for(i = 0;i<num;i++)
        m.insert(make_pair(abs(element-A[i]),A[i]));
    i=0;
    for(it = m.begin();it!=m.end();it++)
        A[i++] = it->second;
}
