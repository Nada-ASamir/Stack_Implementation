#include"QueueArr.h"
#include<iostream>
using namespace std;
template<class T>
QueueArr<T>::QueueArr(){
    front=rear=-1;
    size = 5;
    arr = new T[size];
    elements = 0;
}
template<class T>
void QueueArr<T>::enqueue(T x){
    if((rear+1)%size==front)
        expand();
    
        if(front==-1)
        front=0;

        rear=(rear+1)%size;
        arr[rear] = x;
        elements++;
    
}

template<class T>
void QueueArr<T>::dequeue(){
    if(isempty())
        return;
    else{
        if(front==rear)
        front = rear = -1;
        else
        front = (front + 1) % size;
        elements--;
    }
}

template<class T>
bool QueueArr<T>::isempty(){
    if(front==-1 && rear==-1)
    return true;
    else
        return false;
}
template<class T>
int QueueArr<T>::length(){
    return elements;
}
template<class T>
T QueueArr<T>::frontelement(){
    return arr[front];
}

template<class T>
void QueueArr<T>::expand(){
    T*arr2=new T[size*2];
    
    for (int i = 0; i < size;i++){
        arr2[i] = arr[i];
    }
    delete arr;
    arr = arr2;
    size = size * 2;
    return;
}

template<class T>
QueueArr<T>::~QueueArr(){
    delete[] arr;
}