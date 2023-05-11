#pragma once
#include "ListNode.h"
#include "MyIterator.h"

template <class T>
class MyList //����� ������
{
public:
	typedef ListNode<T> Element;
	typedef MyIterator<Element, T> superIterator;
private:
	Element* head;//������ ������
	int count = 0; // ���������� ����� ������

	Element* Prev(Element* node) {
		if (isEmpty()) 
			return 0;
		if (node == head) 
			return 0;
		Element* p = head;
		while (p->ptr != node)
			p = p->ptr;
		return p;
	}; // ������� � ����������� ���� 

public:
	MyList() { head = 0; } // ������������� ������

	int getCount() { 
		return count; 
	} // ��������� ���������� ����� ������

	bool isEmpty() { 
		return head == 0; 
	}  // ��������, ���� �� ������

	Element* getValue(Element* p) { 
		return p->field; 
	} // ��������� �������� ���� ������

	void setValue(Element* p, Element const& val) { 
		p->field = val; 
	} // ��������� �������� ���� ������

	Element* getFirst() { 
		return head; 
	} // ��������� ��������� ���� ������

	Element* getLast() {
		Element* p = head;
		while (Next(p) != 0)
			p = Next(p);
		return p;
	};// ��������� ���������� ���� ������

	Element* Next(Element* node) {
		if (isEmpty()) return 0;
		return node->ptr;
	};// ������� � ���������� ����

	Element* Add(T& t, Element* node = 0) {
		Element* elem = new Element(t);
		count++;
		if (node == 0) // ���������� ������ ����� �� ���������
		{
			if (head == 0) {
				elem->ptr = 0;
				head = elem;
			}
			else {
				elem->ptr = head;
				head = elem;
			}
			return elem;
		}
		elem->ptr = node->ptr; // ���������� ���� ����� ��������, ���� ������
		node->ptr = elem;
		return elem;
	};// ���������� ���� ������

	Element* Delete(T& _field) {
		Element* elem = new Element(_field);

		if (elem == 0) {
			return 0; 
		} // � ������ ��� �����

		count--;
		if (elem == head)  // �������� ��������� ����
		{
			head = elem->ptr;
			delete elem;
			return head;
		}
		Element* prev = Prev(elem); // �������� �������������� ����
		prev->ptr = elem->ptr;
		delete elem;
		return prev;
	};    // �������� ���� ������

	superIterator begin() {
		return superIterator(head); 
	};

	superIterator end() { 
		return superIterator(getLast()->ptr);
	};
	
};

