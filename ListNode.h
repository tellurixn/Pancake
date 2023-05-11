#pragma once

template <class T>
class ListNode //Ёлемент списка
{
public:
	T field;//сам элемент
	ListNode* ptr;//ссылка на следующий
public:
	ListNode(T const& t) { 
		field = t;
		ptr = 0;
	};

	~ListNode() {
		if (ptr)
			delete ptr;
	};

	ListNode* NextField() { 
		return ptr;
	};

	T* GetCurrent() { 
		return &field;
	};

	void AddItem(T const& t) {
		if (ptr)
			ptr->AddItem(t);
		else
			ptr = new ListNode(t);
	};
};

