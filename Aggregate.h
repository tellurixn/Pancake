#pragma once
#include "Element.h"
#include "Iterator.h"
template <class T>
class Aggregate {       // список объектов с итератором
public:
    typedef Element<T> node;
    typedef Iterator <node, T> myIterator;
private:
    node* root;
public:
    Aggregate() {
        root = 0;
    }
    ~Aggregate() {
        if (root)
            delete root;
    }
    myIterator begin() {
        return myIterator(root);
    }
    myIterator end() {
        return  myIterator(0);
    }
    void push(T const& t) {
        if (root)
            root->push(t);
        else  root = new node(t);
    }

    

};
