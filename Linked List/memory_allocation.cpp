#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode()
    {
        this->val = 0;
        this->next = nullptr;
    }

    ListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }

    ListNode(int val, ListNode *next)
    {
        this->val = val;
        this->next = next;
    }

    // ListNode(ListNode *obj)
    // {
    //     this = obj;
    // }
};

class LinkedList
{
public:
    ListNode *head;

public:
    LinkedList()
    {
        this->head = nullptr;
    }

    LinkedList(ListNode *head)
    {
        this->head = head;
    }

    void Print_List();

    void Insert_Node_Tail(int val);

    void Insert_Node_Head(int val);
};

void LinkedList::Insert_Node_Tail(int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode *itr = head;

    while (itr->next != nullptr)
    {
        itr = itr->next;
    }

    itr->next = newNode;

    return;
}

void LinkedList::Insert_Node_Head(int val)
{
    ListNode *newNode = new ListNode(val, head);
    head = newNode;
    return;
}

void LinkedList::Print_List()
{
    ListNode *itr = head;

    while (itr != nullptr)
    {
        cout << itr->val << " -> ";
        itr = itr->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    LinkedList linkedList;
    linkedList.Insert_Node_Tail(10);
    linkedList.Insert_Node_Tail(20);
    linkedList.Insert_Node_Tail(30);
    linkedList.Print_List();
    linkedList.Insert_Node_Head(0);
    linkedList.Print_List();

    return 0;
}