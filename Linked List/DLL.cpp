#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;

    Node()
    {
        data = NULL;
        prev = nullptr;
        next = nullptr;
    }

    Node(int data, Node *prev = nullptr, Node *next = nullptr)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

class DLL
{
public:
    struct Node *head, *tail;
    int size;

    DLL()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    DLL(struct Node *head)
    {
        this->head = head;
        this->tail = head;
        size = 1;
    }

    void insertNode(int data);
    void insertNode(int data, int pos);
    void insertAthead(int data);
    void insertAtTail(int data);
    int length();
    void printRev();
    bool searchValue(int data);
    void deleteNode(struct Node *add);
    void deleteNode(int pos);
};

void DLL::insertNode(int data)
{
    struct Node *newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
        tail = head;
        size = 1;
    }

    tail->next = newNode;
    newNode->prev = tail;
}

void DLL::printRev()
{
    //
}
int main()
{

    return 0;
}