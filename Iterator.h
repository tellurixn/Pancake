#pragma once
template <class Node, class T>

class Iterator
{
private:
    Node* node_ptr;
public:
    Iterator(Node* n) { node_ptr = n; }
    T* next() {
        return node_ptr->get();
    }


    void  operator ++ () { 
        node_ptr = node_ptr->next();
    }
    Iterator operator ++ (int) {
        Iterator iter(*this);       
        ++(*this);
        return iter;
    }
    bool operator == (Iterator const& i) {
        return node_ptr == i.node_ptr;
    }
    bool operator != (Iterator const& i) {
        return !(*this == i); }

};

