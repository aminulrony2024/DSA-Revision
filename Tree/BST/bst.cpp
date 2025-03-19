#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *lChild;
    Node *rChild;
    Node(int x)
    {
        data = x;
        lChild = rChild = nullptr;
    }
};
class BST
{
public:
    Node *root;
    void createBST(int);
    void inOrder(Node *);
};

void BST::createBST(int key)
{
    Node *t = nullptr;
    Node *p = root;
    while (p)
    {
        t = p;
        if (p->data == key)
            return;
        if (key < p->data)
        {
            p = p->lChild;
        }
        else
            p = p->rChild;
    }
    Node *new_node = new Node(key);
    if (key < t->data)
        t->lChild = new_node;
    else
        t->rChild = new_node;
}
void BST::inOrder(Node *p)
{
    if (p)
    {
        inOrder(p->lChild);
        cout << p->data << " ";
        inOrder(p->rChild);
    }
}
int main()
{
    BST T;
    int val;
    cout << "Enter the value of root : ";
    cin >> val;
    if (val == -1)
        return 0;
    T.root = new Node(val);
    cout << "Enter elements in the binary search tree (input -1 to stop adding elements): ";
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        T.createBST(val);
    };
    cout << "InOrder Traversal of the BST : ";
    T.inOrder(T.root);
    return 0;
}