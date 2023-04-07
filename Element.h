#pragma once
#include <iostream>
using namespace std;
template <class T>
class Element {         // ���� ������ ���� T
private:
    T object; // ��� ������
    Element* next_node; // ������ �� ���������
public:
    Element(T const& t) { 
        object = t;
        next_node = 0; 
    }
    ~Element() { 
        if (next_node)
            delete next_node;
    }
    Element* next() {
        return next_node; 
    }
    T* get() { 
        return &object; 
    }

    void push(T const& t) {
        cout << "element push: " << t << endl;
        if (next_node) next_node->push(t);
        else next_node = new Element(t);
    }
};

