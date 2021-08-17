#include <iostream>
using namespace std;


class List{
public: 
    int Value;
    List* Next;
};

void makeNullList(List *pL) {
    (*pL) = (struct List*)malloc(sizeof(struct List));
    (*pL)->Next = Null;
 }   

int emptyList(List L) {{
    return (L->Next==NULL)
}

// hàm xác định vị trí đầu tiên 

position first(List L) {
    return L;
}

// hàm xác định vị trí sau vị trí cuối cùng

position(List L) {
    while(P->Next != NULL) {
        P = P->Next;
    }
    return P;
}

position(List L) {
    if(P->Next != NULL)
    return P->Next;
}
int main() {

    return 0;
}