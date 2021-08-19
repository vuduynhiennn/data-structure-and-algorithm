#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class List {
public:
    Node* pHead = new Node;
    Node* pTail = new Node;
};
 

void printList(List &l) {
    while(l.pHead->next != NULL) {
        cout << l.pHead->data << endl;
        l.pHead = l.pHead->next;
    }
}

void addNode(List &l, int newValue, int position) {
    if(position == 1) {
        if(l.pHead == NULL) {
        l.pHead->data = newValue;
        return;
    }
    Node* newNode = new Node;
    newNode->next = l.pHead;
    newNode->data = newValue;
    l.pHead = newNode;
    }
}

void deletingNode(List &l, int k) {
    if(k == 0) {
        Node* temp = new Node;
        temp = l.pHead;
        l.pHead = l.pHead->next;
        free(temp);
    }
    if()
}

int main() {
    List nStudents;
    nStudents.pHead = new Node;
    nStudents.pTail = new Node;
    nStudents.pHead->next = nStudents.pTail;
    nStudents.pTail->next = NULL;

    addNode(nStudents, 12, 1);
    addNode(nStudents, 13, 1);
    addNode(nStudents, 14, 1);
    addNode(nStudents, 15, 1);
    deletingNode(nStudents, 0);
    printList(nStudents);   

    return 0;
}