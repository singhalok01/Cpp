#include <iostream>
using namespace std;

class Stack
{
    int arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void Push()
    {
        int value;

        if (top == 99)
        {
            cout << "Stack Overflow.\n";
            return;
        }

        cout << "Enter value: ";
        cin >> value;

        top++;
        arr[top] = value;

        cout << "Element pushed successfully.\n";
    }

    void Pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow.\n";
            return;
        }

        cout << "Deleted element = " << arr[top] << endl;
        top--;
    }

    void Show()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack elements:\n";

        for (int i = top; i >= 0; i--)
            cout << arr[i] << endl;
    }

    int find_top()
    {
        if (top == -1)
            return -1;

        return arr[top];
    }
};

int main()
{
    Stack s;

    s.Push();
    s.Push();
    s.Push();

    s.Show();

    cout << "Top element = " << s.find_top() << endl;

    s.Pop();

    s.Show();

    cout << "Top element = " << s.find_top() << endl;

    return 0;
}