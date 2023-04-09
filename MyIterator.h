#pragma once
template <class NodeClass, class T>
class MyIterator {
private:
    NodeClass* node_ptr;
public:
    MyIterator(NodeClass* n) { node_ptr = n; }

    T* next() { return node_ptr->GetCurrent(); }

    void  operator ++ () { node_ptr = node_ptr->NextField(); }

    MyIterator operator ++ (int) {
        MyIterator iter(*this);     
        ++(*this);
        return iter;
    }
    bool operator == (MyIterator const& i) {
        return node_ptr == i.node_ptr;
    }
    bool operator != (MyIterator const& i) { return !(*this == i); }

    NodeClass* operator* () { return node_ptr; };
};


