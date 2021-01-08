#ifndef _VECTOR_H
#define _VECTOR_H

class Vector{
    public:
        Vector(int size) : m_size(size){
            m_array = new int[size];
        }
        ~Vector() {delete m_array;}
        int& operator[](int index) {return m_array[index];}
    private:
        int m_size;
        int *m_array;
};
#endif

