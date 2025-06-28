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

    void Insert_Node(int val);
};

void LinkedList::Insert_Node(int val)
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

void LinkedList::Print_List()
{
    ListNode *itr = head;

    while (itr->next != nullptr)
    {
        cout << itr->val << " -> ";
        itr = itr->next;
    }
    cout << itr->val << endl;
}

int main()
{

    LinkedList linkedList;
    linkedList.Insert_Node(10);
    linkedList.Insert_Node(20);
    linkedList.Insert_Node(30);
    linkedList.Print_List();

    return 0;
}