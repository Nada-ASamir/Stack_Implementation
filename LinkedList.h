template<class T>
class Node{

    public:
    Node<T> *next;
    T value;

    Node();
    Node(T x);

};

template<class T>
class LinkedList{
    int count;
    Node<T> *head;
    Node<T> *tail;
    
    public:

    LinkedList();
    int length();
    T At(int);
    void append(T);
    void deleteAt(int);
    void insertAt(int, T);
    void moveNode(T, int);
    ~LinkedList();


};