//
// Created by Sebastian Q.B on 9/28/2019.
//
using namespace std;
template <class T, unsigned int BUFFER_SIZE>
class DynamicArray{
private:
    unsigned const CAPACITY = BUFFER_SIZE;
    unsigned int size;
    unsigned int reserved;
    T* items;

    void reserve(){
        reserved+=CAPACITY;
        T* temp = new T[reserved];
        for (auto i=0;i<size;i++)
            temp[i]=items[i];
        delete[]items;
        items= temp;
    }

public:

    unsigned int returnReserved(){
        return reserved;
    }

    DynamicArray(){
        size=0;
        reserved= BUFFER_SIZE;
        items= new T[CAPACITY];

    }
    void addItem(T item){
        if (size ==reserved)
            reserve();
        items[size]=item;
        size ++;
    }

    unsigned int getSize() {
        return size;
    }

    T getItem(unsigned int index){
        return items[index];
    }

};