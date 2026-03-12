template<class T>

class ArrList{
    int size, elements;
    T *arr;

    public:

    ArrList();
    int length();
    void insertAt(int pos, T value);
    void deleteAt(int pos);
    void expand();
    void append(T value);
    T At(int pos);
    ~ArrList();
    
};