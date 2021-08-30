#include <iostream>
using namespace std;

class Node  {
    public:
        int data;
        Node* left; 
        Node* right;  
};

void nodeInit(Node* tree) {
    tree = NULL; 
}

void addANewNode(Node* &tree, int newData) {
    if(tree == NULL) {
        Node* newNode = new Node; 
        newNode->data = newData; 
        newNode->left = NULL;
        newNode->right = NULL;
        tree = newNode; 
    } else if (tree->data > newData) {
        addANewNode(tree->right, newData);
    } else {
        addANewNode(tree->left, newData);
    }
}
void print_NLR(Node* tree)
{ 
	if (tree != NULL)
	{
		cout << tree->data << " "; 
		print_NLR(tree->left); 
		print_NLR(tree->right); 
	}
}

void print_NRL(Node* tree) {
    if (tree != NULL)
	{
		cout << tree->data << " "; 
		print_NLR(tree->right); 
		print_NLR(tree->left); 
	}
}

void print_LNR(Node* tree) {
    if (tree != NULL)
	{
		cout << tree->data << " "; 
		print_NLR(tree->right); 
		print_NLR(tree->left); 
	}
}


int main() {
    Node* tree = NULL;
    nodeInit(tree);
    addANewNode(tree, 5);
    addANewNode(tree, 7);
    addANewNode(tree, 6);
    addANewNode(tree, -2);
    addANewNode(tree, 0);
    addANewNode(tree, 1);
    addANewNode(tree, -5);
    addANewNode(tree, -3);
    cout << "=============NLR==============" << endl;
    print_NLR(tree);
    cout << "=============NRL==============" << endl;
    print_NRL(tree);
    cout << "=============LNR=============="; << endl;
    print_LNR(tree);
    return 0;
}