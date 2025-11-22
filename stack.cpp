#include<iostream>
using namespace std;
int const MAX_SIZE = 100;
class stack{
    private:
        int top;
        int item[MAX_SIZE];

    public:
        stack() : top(-1) {};

        void add(int element)
        {
            if(top>=MAX_SIZE-1){
                cout << "Stack out of place";
            }else{
                top++;
            item[top] = element;
            }
        }


        bool isEmpty(){
            return top<0;
        }

        void pop(){
            if(isEmpty())cout<<"Stack empty";
            else{
                top--;
            }
        }
        int getTop(){
            if(isEmpty()){
                cout << "Stack empty";
                return 0;
            }
            else{
                return item[top];
            }
        }

        void print(){
            cout << '[';
            for (int i = 0; i < top+1; i++)
            {

                cout <<" "<< item[i]<<" ";
            }
            cout << ']'<<'\n';
        }


};
