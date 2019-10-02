//
// Created by diego on 25/09/19.
//

#ifndef PC2SIMULACRO_QUEUE_H
#define PC2SIMULACRO_QUEUE_H

#include <vector>
using namespace std;

template <class T, int N>
class Queue{
private:
    vector<T>* elementos;
public:
    Queue(vector<T> *elementos) : elementos(elementos) {}

    Queue() {
        elementos = new vector<T>;
        elementos->reserve(N);
    }

    vector<T> *getElementos() const {
        return elementos;
    }

    void enQueue(T elemento){
        if(elementos->size() < N){
            elementos->push_back(elemento);
        }
    }

    T deQueue(){
        if(elementos->size()!= 0) {
            T temp = *(elementos->begin());
            elementos->erase(elementos->begin());
            return temp;
        }
    }

    bool isEmpty(){
        return (elementos->size() == 0) ? true : false;
    }

    bool isFull(){
        return (elementos->size() == N) ? true : false;
    }

    virtual ~Queue() {
        delete elementos;
    }
};

#endif //PC2SIMULACRO_QUEUE_H
