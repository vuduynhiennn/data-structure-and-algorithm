#include <iostream>
using namespace std;

// khai bao cau truc danh sach lien ket don cac so nguyen 

struct node {
    int data; // du lieu cua mot node
    struct node *pNext; // con tro de lien ket giua cac node voi nhau

};

typedef struct node NODE; // thay the struct node thanh NODE 

struct list {
    NODE *pHead; // node quan li dau danh sach
    NODE *pTail; // node quan li cuoi danh sach
};

typedef struct list LIST; // thay the struct list thanh LIST

void khoiTao(LIST &l) {
    l.pHead = NULL;
    l.pTail = NULL;
}

// ham khoi tao 1 cai node 
NODE *khoitaoNode(int x) {
    NODE *p = new NODE;// cap phat vung nho cho con tro cho node p
    if(p == NULL) {
        cout << "overload";
        return NULL;
    }
    p->data = x; //truyen gia tri x vao data
    p->pNext = NULL; // chua lien ket den node nao het nen con tro tro den NULL 
    return p; // tra ve node p vua khoi tao 
}   

// ham them node vao dau danh sach lien ket 
void themVaoDau(LIST &l, NODE *p) {
    // danh sach dang rong
    if(l.pHead == NULL) {
        l.pHead = l.pTail = NULL; // node dau cung chinh la node cuoi va la p
    } else {
        p->pNext = l.pHead; // cho con tro cua node can them la node p lien ket den node dau
        l.pHead = p; // cap nhat lai pHead chinh la node p
    }
}


// ham them node p vao cuoi danh sach lien ket don

void themVaoCuoi(LIST &l, NODE *p) {
    if(l.pHead == NULL) {
        l.pHead = l.pTail = p; // node dau cung chinh la node cuoi va la p
    } else {
        l.pTail->pNext = p; // cho con tro pTail lien ket voi node p
        l.pTail = p; // cap nhat lai p la node cuoi va la pTail
    }
}

void xuatDanhSachLienKetDon(LIST l) {
   for (NODE *k = l.pHead; k != NULL; k = k->pNext) {
       cout << k->data << " "; 
   }
}


void findMax(LIST l) {
    int max = l.pHead->data;
    for (NODE *k= l.pHead->pNextl; k != NULL; k =  k->pNext) {
        if (max < k->data)
    }
}
int main() {
    LIST l;
    khoitaoNode(l); // khoi tao danh sach lien ket don
    int n;
    cout << "nhap so luong node can them: ";
    for (int i = 1; i <= n; i++) {
        int x;
        cout << "\n nhap gia tri x: ";
        cin >> x;
        NODE *p = khoitaoNode(x); // khoi tao 1 cai node so nguyen 
        themVaoDau(l, p); // them node p vao dau danh sach lien ket don
    }
    cout << "xuat danh sach lien ket don";

    system("pause");
    return 0;
}