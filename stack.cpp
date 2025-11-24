#include<iostream>
using namespace std;

template <class t>
class Stack{
    private:
        int static const MAX_SIZE = 100;
        int top;
        t item[MAX_SIZE];

    public:
        Stack() : top(-1) {};

        void add(t element)
        {
            if(top>=MAX_SIZE-1){
                cout << "Stack is full\n";
            }else{
                top++;
                item[top] = element;
            }
        }


        bool isEmpty() const{
            return top<0;
        }

        void pop(){
            if(isEmpty())cout<<"Stack is empty\n";
            else{
                top--;
            }
        }
        bool getTop(t&element){
           if(isEmpty()){
               return false;
           }else{
               element = item[top];
               return true;
           }
        }

        void print() {
            if(isEmpty()){
                cout << "No elements to show, Stack empty.";
            }else{
            cout << '[';
            for (int i = top; i>=0; i--)
            {

                cout <<" "<< item[i]<<" ";
            }
            cout << ']'<<'\n';
        }
        }

        void clear(){
            top = -1;
        }

        int size(){
            return top + 1;
        }


};

int main(){
    Stack<int>s;
    s.add(1);
    s.add(2);
    s.add(3);
    s.add(4);

    s.print();
    
    int high = 0;
    s.getTop(high);
    cout << high << '\n';

    int x=s.size();
    cout << x << '\n';

    s.pop();

    x=s.size();
    cout << x << '\n';

    s.clear();

    x=s.size();
    cout << x << '\n';
}

