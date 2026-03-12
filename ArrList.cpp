#include<iostream>
#include"ArrList.h"
using namespace std;

template<class T>
ArrList<T>::ArrList(){
    size = 5;
    elements = 0;
    arr = new T[size];

}

template<class T>
int ArrList<T>:: length(){
    return elements;
}

template<class T>
void ArrList<T>::expand(){
    T *arr2 = new T[size * 2];
    for (int i = 0; i < elements; i++)
    {
        arr2[i] = arr[i];
    } 
    delete arr;
    arr = arr2;

    return;
}

template<class T>
void ArrList<T>::append(T value){
    if(elements==size)
        expand();

    arr[elements] = value;
    elements++;
    return;
}

template<class T>
T ArrList<T>::At(int pos){
    if(pos>elements)
        cout << "Wrong position, doesn't exist;";
    return arr[pos];
}

template<class T>
void ArrList<T>::insertAt(int pos,T value){
    if(pos>elements)
        cout << "Wrong position, doesn't exist;";

    if(elements==size)
        expand();

    for (int i = elements; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    elements++;
}

template<class T>
void ArrList<T>::deleteAt(int pos){
    if(elements==0){
        cout << "No elements to delete (empty)\n";
        return;
    }
    for (int i = pos;i<elements-1;i++){
        arr[i] = arr[i + 1];
    }
    elements--;
}

template<class T>
ArrList<T>::~ArrList(){
    delete[] arr;
}

int main(){
    ArrList<int> A;
    A.append(2);
    A.append(3);
    A.append(4);
    A.append(5);
    A.append(6);
    cout<<A.At(0)<<' ';
    cout<<A.At(1)<<' ';
    cout<<A.At(2)<<' ';
    cout<<A.At(3)<<' ';
    cout<<A.At(4)<<' ';
    cout << '\n';
    A.insertAt(2, 16);
    cout<<A.At(0)<<' ';
    cout<<A.At(1)<<' ';
    cout<<A.At(2)<<' ';
    cout<<A.At(3)<<' ';
    cout<<A.At(4)<<' ';
    cout<<A.At(5)<<' ';

    A.deleteAt(3);
    cout << '\n';
    cout<<A.At(0)<<' ';
    cout<<A.At(1)<<' ';
    cout<<A.At(2)<<' ';
    cout<<A.At(3)<<' ';
    cout<<A.At(4)<<' ';

    cout << '\n';
    cout<<A.At(2);
    

}