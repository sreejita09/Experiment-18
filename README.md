# Experiment 18
# Aim
to implement stack implementation using array

# Apparatus 
Vs Code

# Theory 
* Stack is a linear data structure which follows LIFO principle. In this article, we will learn how to implement Stack using Arrays.
* In Array-based approach, all stack-related operations are executed using arrays. Let’s see how we can implement each operation on the stack utilizing the Array Data Structure.
* Push
The operation of adding an element to the top of the stack.
Example: If you push 5 onto an empty stack, the stack now contains [5].
* Pop
The operation of removing the top element from the stack.
Example: If you pop from a stack containing [5, 10], it removes 10 and leaves [5].
* Peek (or Top)
A function that returns the top element of the stack without removing it. This operation is not included in the initial implementation but is commonly used.
* Display
The operation to show all elements currently in the stack.

# Codes 
code 1
~~~
#include <iostream>
using namespace std;

const int n = 100;
int stack[n], top = -1;

void push(int val) {
    if (top >= n - 1) {
        cout << "Stack overflow" << endl;
    } else {
        stack[++top] = val;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack underflow" << endl;
    } else {
        cout << "The popped element is: " << stack[top--] << endl;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch,val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) display stack"<<endl;
    cout<<"4) exit"<<endl;

    do
    {
        cout<<"enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter the value that has to be pushed"<<endl;
                cin>>val;
                push(val);
                break;
            }

            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"exit"<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }
    while (ch!=4);
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/cfce5d36-fc08-4a9f-b608-0a088ed02088)

code 2 
~~~
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
~~~
![image](https://github.com/user-attachments/assets/37f88da0-6313-4a7b-8866-ed489d5dbabb)
