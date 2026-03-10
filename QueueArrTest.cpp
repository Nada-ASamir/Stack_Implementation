#include<iostream>
#include"QueueArr.cpp"
using namespace std;

int main(){
    QueueArr<int>q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout << q.frontelement();
    q.dequeue();
    cout << q.frontelement();
    q.dequeue();
    cout << q.frontelement();
    q.dequeue();
    cout << q.frontelement();
    q.dequeue();
    cout << q.frontelement()<<'\n';
    cout <<"length: " <<q.length();

    q.enqueue(2);
    cout<<'\n';
    cout <<"front: " <<q.front << ' '<<"rear: " << q.rear;
     //front is at index 4 and rear is at index 0, indicating circular queue
     // as if it is rear->[2___6]<-front
    q.dequeue();
    q.dequeue();
    cout << '\n';
    cout <<"length: " <<q.length()<<'\n';
    cout <<"front: " <<q.front << ' '<<"rear: " << q.rear;

    // im going to check on expand function.
    // i will fill the QueueArr q then try to add a 6th element.
    //then check the size of the q. it should be 10.
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    q.enqueue(10);
    cout<<'\n'<<"new size: "<<q.size<<'\n';
    cout <<"front: " <<q.front << ' '<<"rear: " << q.rear;
    
}