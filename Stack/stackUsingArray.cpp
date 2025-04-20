#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int size;
    int top;
    int *arr;

public:
    Stack()
    {
        top = -1;
        cout << "Enter the size of the stack : ";
        cin >> size;
        arr = new int[size];
    }
    int Size()
    {
        return size;
    }
    void push()
    {
        if (top == size - 1)
            cout << "Stack is full!" << endl;
        else
        {
            int x;
            cin >> x;
            arr[++top] = x;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            return top;
        }
        else
        {
            int x = arr[top--];
            return x;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty. Kindly enter elements into the stack first! " << endl;
        }
        cout << "Elements of the stack are : ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    cout << "Stack Using Array " << endl;
    Stack st;
    int x;
    do
    {
        cout << "Enter 1 to Insert the element's of the stack : " << endl;
        cout << "Enter 2 to Display the element's of the stack : " << endl;
        cout << "Enter 3 to insert an element into the stacK : " << endl;
        cout << "Enter 4 to pop an element from the stacK : " << endl;
        cout << "Enter 0 to stop: " << endl;
        cin >> x;
        switch (x)
        {
        case 1:
        {
            cout << "Enter the elements of the stack : ";
            for (int i = 0; i < st.Size(); i++)
            {
                st.push();
            }
            break;
        }
        case 2:
            st.display();
            break;
        case 3:
            st.push();
            break;
        case 4:
        {
            int deletedElement = st.pop();
            if (deletedElement != -1)
                cout << "The element deleted from the stack is : " << deletedElement << endl;
            else
                cout << "Stack is empty!" << endl;
            break;
        }
        default:
            break;
        }
    } while (x != 0);

    return 0;
}