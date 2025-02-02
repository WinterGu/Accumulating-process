#include <iostream>

using namespace std;

class SqStack
{
  private:
    int *base; //栈底指针
    int top;   //栈顶
    int stackSize;

  public:
    SqStack(int m);
    ~SqStack()
    {
        delete[] base;
        top = -1;
        stackSize = 0;
    };
    void Push(int e);
    int Pop();
    int GetTop();
    int StackEmpty();
    void StackTranverse(); //显示栈中元素
};

void SqStack::Push(int e)
{
    if (top == stackSize - 1)
    {
        cout << "栈满，无法入栈";
        return;
    }
    top++;
    base[top] = e;
}

int SqStack::Pop()
{
    int e;
    if (top = -1)
    {
        cout << "栈空，无法出栈";
        return -1;
    }
    e = base[top--];
    return e;
}

int SqStack::GetTop()
{
    return top;
}

void SqStack::StackTranverse()
{
    if (top == -1)
    {
        cout << "空栈";
    }

    for (int i = 0; i < top; i++)
    {
        cout << "index: " << i << " value: " << base[i] << endl;
    }
}

struct Node
{
    int data;
    Node *next;
};

class LinkStack
{
  private:
    Node *top;

  public:
    LinkStack() { top == NULL; };
    ~LinkStack();
    void Push(int e);
    int Pop();
    int GetTop()
    {
        if (top != NULL)
            return top->data;
    };
    bool Empty() { return top != NULL ? 1 : 0; };
};

LinkStack::~LinkStack()
{
    Node *p;
    while (top)
    {
        p = top->next;
        delete top;
        top = p;
    }
}

void LinkStack::Push(int e)
{
    Node *s = new Node;

    if (!s)
    {
        cout << "内存分配失败";
        return;
    }
    s->data = e;
    s->next = top;
    top = s;
}

int LinkStack::Pop()
{
    int x;
    if (top == NULL)
    {
        cout << "栈溢出";
        return -1;
    }
    x = top->data;
    Node *p = top;
    top = top->next;
    delete p;
    return x;
}