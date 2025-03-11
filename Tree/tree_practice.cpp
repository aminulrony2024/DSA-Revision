#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *lchild;
    Node *rchild;
};
class Tree
{
private:
    Node *root = nullptr;

public:
    void createTree();
    void preOrder(Node *);
    void preOrder()
    {
        preOrder(root);
    }
    void inOrder(Node *);
    void inOrder()
    {
        inOrder(root);
    }
    void postOrder(Node*);
    void postOrder()
    {
        postOrder(root);
    }
};

// creating the tree
void Tree::createTree()
{
    Node *p, *t;
    root = new Node;
    queue<Node *> q;
    int x;
    cout << "Enter data of root : ";
    cin >> x;
    root->value = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter left child (enter -1 to skip ) " << p->value << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->value = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }
        cout << "Enter right child (enter -1 to skip ) " << p->value << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->value = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}
void Tree::preOrder(Node *p)
{
    if (p)
    {
        cout << p->value << " ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}
void Tree::inOrder(Node *p)
{
    if (p)
    {
        inOrder(p->lchild);
        cout << p->value << " ";
        inOrder(p->rchild);
    }
}
void Tree::postOrder(Node *p)
{
    if(p)
    {
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout<< p -> value << " ";
    }
}
int main()
{
    Tree T;
    T.createTree();
    T.postOrder();
    return 0;
}