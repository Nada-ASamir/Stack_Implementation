#include<iostream>
#include<assert.h>
#include "LinkedList.h"

using namespace std;

template<class T>
Node<T>::Node(){
    next = value = 0;
}
template<class T>
Node<T>::Node(T x){
    value = x;
}


template<class T>
LinkedList<T>::LinkedList(){
    head = tail = 0;
    count = 0;
}

template<class T>
int LinkedList<T>::length(){
    return count;
}

template<class T>
T LinkedList<T>::At(int pos){

    assert(pos >= 0 && pos < count);

    Node<T> *tmp=head;
    for (int i = 0; i < pos; i++)
    {
        tmp=tmp->next;
    }

    return tmp->value;
}

template <class T>
void LinkedList<T>:: append(T val){
    Node<T> *newNode= new Node<T>(val);
    if(head==0){
        head = tail = newNode;
    }else{
    tail->next = newNode;
    tail = newNode;
    }
    count++;
}

template<class T>
void LinkedList<T>::insertAt(int pos,T val){
    assert(pos >= 0 && pos < count);
    Node<T> *newNode= new Node<T>(val);
    Node<T> *tmp = head;
    if(pos==0){
        newNode->next=head;
        head = newNode;
    }else{
        for (int i = 0; i < pos-1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next = newNode;
    }

    count++;
}

template<class T>
void LinkedList<T>::deleteAt(int pos){
    Node<T> *del;
    Node<T> *tmp = head;
    if(pos==0){
        head = head->next;
        delete tmp;
    }else{
        for (int i = 0; i < pos-1; i++)
        {
            tmp=tmp->next;
        }
        del=tmp->next;
        tmp->next = del->next;
        delete del;
        if(pos==count-1)
            tail = tmp;
    }
    count--;
}

template <class T>
// this function moves node with value==val to position==pos in list.
void LinkedList<T>::moveNode(T val, int pos)
{
    int index = 0;
    Node<T> *tmp=head;
    while (tmp != NULL && tmp->value!=val){
        tmp=tmp->next;
        index++;
    }
    deleteAt(index);
    insertAt(pos, val);
}

template <class T>
LinkedList<T>::~LinkedList(){
    while(count!=0)
        deleteAt(0);
}



int main(){

    LinkedList<int> li;
    li.append(1);
    li.append(2);
    li.append(3);
    li.append(4);
    li.append(5);

    for (int i = 0; i < li.length(); i++)
    {
        cout<<li.At(i)<<' ';
    }

    li.moveNode(2, 3);
    cout << endl;
    for (int i = 0; i < li.length(); i++)
    {
        cout<<li.At(i)<<' ';
    }

}