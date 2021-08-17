#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    int Value;
    Node* Next;
};

void printList(Node* n) {
    while(n->Next != NULL) {
        cout << n->Value << " ";
        n = n->Next;
    }
}

void insertAtTheFront(Node* Head, int newValue) {
    Node* newNode = new Node;
    newNode->Value = newValue;
    newNode->Next = Head;
    Head = newNode;
}

int main() {
    Node* Head = new Node;
    Node* First = new Node;
    Node* Second = new Node;
    Node* Third = new Node;
     
    Head->Value = 1;
    Head->Next = First;

    First->Value = 2;
    First->Next = Second;

    Second->Value = 3;
    Second->Next = Third;

    Third->Value = 4;
    Third->Next = NULL;
    insertAtTheFront(Head, -2);
    printList(Head);
    return 0;
}