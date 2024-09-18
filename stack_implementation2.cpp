// Sreejita Bhardwaj
// Entc
// Exp 18: stack implementation using array

#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999

class stack
{
    int top, ar[size];
    public:
    stack()
    {
        top=-1;
        ar[0]=0;
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};
void stack::push(int num)
{
    if(top==size-1)
    {
        cout<<"STACK OVERFLOW: STACK IS FULL"<<endl;
        return;
    }
    else
    {
        ar[++top]=num;
    }
}
int stack::pop()
{
    int val;
    if(top==-1)
    {
        cout<<"STACK UNDERFLOW: STACK IS EMPTY"<<endl;
        return ERROR;
    }
    else
    {
        val=ar[top--];
        return val;
    }
}
int stack::peak()
{
    if (top==-1)
    {
        cout<<"STACK UNDERFLOW: STACK IS EMPTY"<<endl;
        return ERROR;
    }
    else
    {
        return ar[top];
    }
}
void stack::disp()
{
    if (top==-1)
    {
        cout<<"STACK UNDERFLOW: STACK IS EMPTY"<<endl;
        return;
    }
    else
    {
        int i=0;
        while(i!=(top+1))
        {
            cout<<ar[i]<<" ";
            i++;
        }
    }
}
int main()
{
    stack s1;
    s1.push(7);
    s1.push(10);
    s1.push(4);
    int val=s1.pop();
    cout<<val;
    int top=s1.peak();
    cout<<top;
    s1.disp();
    return 0;
}