template <class T>

class QueueArr{
 
public:
 int front,rear,size,elements;
    T *arr;
    QueueArr();
    void enqueue(T);
    void dequeue();
    T frontelement();
    bool isempty();
    int length();
    void expand();

    ~QueueArr();
};