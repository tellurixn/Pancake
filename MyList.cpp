#include "MyList.h"

//ListNode* MyList::Prev(ListNode* node)
//{
//    if (isEmpty()) return nullptr;
//    if (node == head) return nullptr;
//    ListNode* p = head;
//    while (p->ptr != node)
//        p = p->ptr;
//    return p;
//}



//ListNode* MyList::getLast()
//{
//    ListNode* p = head;
//    while (Next(p) != nullptr)
//        p = Next(p);
//    return p;
//}

//ListNode* MyList::Next(ListNode* node)
//{
//    if (isEmpty()) return nullptr;
//    return node->ptr;
//}

//ListNode* MyList::Add(T const& t, ListNode* node = nullptr)
//{
//    ListNode* elem = new ListNode();
//    elem->field = t;
//    count++;
//    if (node == nullptr) // Добавление нового корня
//    {
//        if (head == nullptr) {
//            elem->ptr = nullptr;
//            head = elem;
//        }
//        else {
//            elem->ptr = head;
//            head = elem;
//        }
//        return elem;
//    }
//    elem->ptr = node->ptr; // Добавление узла после текущего
//    node->ptr = elem;
//    return elem;
//}

//ListNode* MyList::Delete(ListNode* node)
//{
//    if (node == nullptr) { return nullptr; } // В списке нет узлов
//    count--;
//    if (node == head)  // Удаление корневого узла
//    {
//        head = node->ptr;
//        delete node;
//        return head;
//    }
//    ListNode* prev = Prev(node); // Удаление промежуточного узла
//    prev->ptr = node->ptr;
//    delete node;
//    return prev;
//}
