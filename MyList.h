#pragma once
#include "ListNode.h"
#include "MyIterator.h"

template <class T>
class MyList //Класс списка
{
public:
	typedef ListNode<T> Element;
	typedef MyIterator<Element, T> superIterator;
private:
	Element* head;//Корень списка
	int count = 0; // Количество узлов списка

	Element* Prev(Element* node) {
		if (isEmpty()) 
			return 0;
		if (node == head) 
			return 0;
		Element* p = head;
		while (p->ptr != node)
			p = p->ptr;
		return p;
	}; // Переход к предыдущему узлу 

public:
	MyList() { head = 0; } // Инициализация списка

	int getCount() { 
		return count; 
	} // Получение количества узлов списка

	bool isEmpty() { 
		return head == 0; 
	}  // Проверка, пуст ли список

	Element* getValue(Element* p) { 
		return p->field; 
	} // Получение значения узла списка

	void setValue(Element* p, Element const& val) { 
		p->field = val; 
	} // Установка значения узла списка

	Element* getFirst() { 
		return head; 
	} // Получение корневого узла списка

	Element* getLast() {
		Element* p = head;
		while (Next(p) != 0)
			p = Next(p);
		return p;
	};// Получение последнего узла списка

	Element* Next(Element* node) {
		if (isEmpty()) return 0;
		return node->ptr;
	};// Переход к следующему узлу

	Element* Add(T& t, Element* node = 0) {
		Element* elem = new Element(t);
		count++;
		if (node == 0) // Добавление нового корня по умолчанию
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
		elem->ptr = node->ptr; // Добавление узла после текущего, если указан
		node->ptr = elem;
		return elem;
	};// Добавление узла списка

	Element* Delete(T& _field) {
		Element* elem = new Element(_field);

		if (elem == 0) {
			return 0; 
		} // В списке нет узлов

		count--;
		if (elem == head)  // Удаление корневого узла
		{
			head = elem->ptr;
			delete elem;
			return head;
		}
		Element* prev = Prev(elem); // Удаление промежуточного узла
		prev->ptr = elem->ptr;
		delete elem;
		return prev;
	};    // Удаление узла списка

	superIterator begin() {
		return superIterator(head); 
	};

	superIterator end() { 
		return superIterator(getLast()->ptr);
	};
	
};

