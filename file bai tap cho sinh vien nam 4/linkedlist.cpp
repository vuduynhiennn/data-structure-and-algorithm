#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
};

class List {
public:
    Node* head = new Node;
    Node* tail = new Node;
};

void list(List &l) {
    l.head->data = "first";
    l.head->next = l.tail;
    l.tail->next = NULL;
}

void addAtTheFirst(List &l, string newValue) {
    Node* newNode = new Node;
    newNode->data = newValue;
    newNode->next = l.head;
    l.head = newNode;
}

void addAtTheEnd(List &l, string newValue) {
    Node* newNode = new Node;
    newNode->next = NULL;
    l.tail->data = newValue;
    l.tail->next = newNode;
    l.tail = newNode;
    
}

void addAtTheMiddle(List &l, Node* previous, string newValue) {
    Node* newNode = new Node;
    newNode->data = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
}

void printList(List &l) {
    while(l.head->next != NULL) {
        cout << l.head->data << endl;
        l.head = l.head->next;
    }
}

int main() {
    List stringList;
    list(stringList);

    addAtTheFirst(stringList, "second");
    addAtTheEnd(stringList, "third");
    addAtTheMiddle(stringList, stringList.head, "middle");
    printList(stringList);

    return 0;
}