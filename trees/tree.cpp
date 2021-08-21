#include <iostream>
using namespace std;

class Node{
    int data;
    Node *Left;
    Node *Right;
};

typedef Node* Tree;

void addNode(Tree &l, int x) {
    if(l == NULL) {
        NODE *p = new Node; // khoi tao 1 node them vao cay
        l->data = x; // them du lieu x vao data
        l->Left = NULL;
        l->Right = NULL;
        l = p; // node p chinh la node goc 
    } else {
        // neu phan tu them vao nho hon node goc -> them node vao ben trai cua 
        if (x < l->data) {
            addNode(l->Left, x);//  duyet qua trai de them phan tu x 
        } else if (l->p.data < x){
            addNode(l->Left, x);// duyet qua phai de them phan tu x  
        }
    }
}

void inputValue(Tree &l) {
    cout << "\n============MENU============\n";
    cout << "\n1.Nhap du lieu\n";
    cout << "\n2.Xuat du lieu\n";
    cout << "\n3.Ket thuc\n";
    int choice;
    cout << "\nNhap lua chon\n";
    cin >> choice;
    if(choice < = || choice > 3) {

    } else if (choice == 1) {
        addNode();
    } else if (choice == 2) {

    }
}

void duyet(TREE t) {
    if (t != NULL) {
        cout << t->data;
        duyet(TREE \\t) 
    }
}
int main() {

    return 0;
}